@class NSString;

@interface MMWebViewAISearchConfig : NSObject <PBCoding>

@property (copy, nonatomic) NSString *logo;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL canPlaceholderSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_logo;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_placeholder;
+ (void)PBArrayAdd_canPlaceholderSearch;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
