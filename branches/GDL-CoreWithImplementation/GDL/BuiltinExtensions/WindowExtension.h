/** \file
 *  Game Develop
 *  2008-2013 Florian Rival (Florian.Rival@gmail.com)
 */

#ifndef WINDOWEXTENSION_H
#define WINDOWEXTENSION_H

#include "GDL/ExtensionBase.h"
namespace gd {class ArbitraryResourceWorker;}

/**
 * \brief Internal built-in extension providing windows features.
 *
 * \ingroup BuiltinExtensions
 */
class WindowExtension : public ExtensionBase
{
    public:
        WindowExtension();
        virtual ~WindowExtension() {};

        #if defined(GD_IDE_ONLY)
        virtual void ExposeActionsResources(gd::Instruction & action, gd::ArbitraryResourceWorker & worker);
        #endif
};

#endif // WINDOWEXTENSION_H
