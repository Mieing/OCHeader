@interface MMExposeH5VersionLogic : MMObject

+ (BOOL)isH5VersionExposeActive;
+ (id)genExposeEntranceUrlWithScene:(unsigned int)a0;
+ (id)genExposeEntranceUrlWithScene:(unsigned int)a0 extraQuery:(id)a1;
+ (void)enterExposeH5InScene:(unsigned int)a0 withExtraData:(id)a1 usingNavigationController:(id)a2;
+ (void)enterExposeH5InScene:(unsigned int)a0 withExtraData:(id)a1 usingNavigationController:(id)a2 forcePortrait:(BOOL)a3;
+ (void)enterExposeH5InScene:(unsigned int)a0 withExtraData:(id)a1 withExtraQuery:(id)a2 usingNavigationController:(id)a3;
+ (void)enterExposeH5InScene:(unsigned int)a0 withExtraData:(id)a1 withExtraQuery:(id)a2 usingNavigationController:(id)a3 forcePortrait:(BOOL)a4;
+ (void)internalEnterExposeH5InScene:(unsigned int)a0 withExtraData:(id)a1 withExtraQuery:(id)a2 usingNavigationController:(id)a3 forcePortrait:(BOOL)a4;

@end
