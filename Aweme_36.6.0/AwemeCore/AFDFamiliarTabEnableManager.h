@class NSString;

@interface AFDFamiliarTabEnableManager : NSObject <AFDFamiliarTabEnableManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)familiarTabPosition;
+ (BOOL)familiarTabIn2Tab;
+ (BOOL)familiarTabInHomepage;
+ (BOOL)isFamiliarTabSelected;
+ (BOOL)isNotInFamiliarTab;
+ (BOOL)isFamiliarShowOnTop;
+ (BOOL)enableFamiliarTab;
+ (long long)familiarFeedPosition;
+ (long long)p_indexForTabID:(id)a0;
+ (id)familiarItemConfig;


@end
