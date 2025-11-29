@class IESECStorePageContext;

@interface IESECShopClassifyProductTabStyleManager : NSObject

@property (retain, nonatomic) IESECStorePageContext *pageContext;

+ (id)sharedTabStyleManager;
+ (BOOL)isValidTabStyle:(long long)a0;

- (void)setTabStyle:(long long)a0;
- (long long)getTabStyle;
- (id)key;
- (void).cxx_destruct;

@end
