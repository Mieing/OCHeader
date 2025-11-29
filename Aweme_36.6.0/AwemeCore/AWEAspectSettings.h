@class AWEAspectBlockList;

@interface AWEAspectSettings : NSObject

@property (retain, nonatomic) AWEAspectBlockList *blocklist;

+ (id)sharedSettings;

- (BOOL)isAllowedHookMethod:(SEL)a0 inClass:(Class)a1 inModule:(id)a2;
- (void).cxx_destruct;

@end
