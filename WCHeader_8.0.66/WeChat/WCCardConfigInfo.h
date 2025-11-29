@class NSString;

@interface WCCardConfigInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *emptyTips;
@property (retain, nonatomic) NSString *shoppingMallTitle;
@property (retain, nonatomic) NSString *shoppingMallUrl;
@property (nonatomic) BOOL isShowShoppingMall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_emptyTips;
+ (void)PBArrayAdd_shoppingMallTitle;
+ (void)PBArrayAdd_shoppingMallUrl;
+ (void)PBArrayAdd_isShowShoppingMall;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)parseFromJSONStr:(id)a0;
- (void).cxx_destruct;

@end
