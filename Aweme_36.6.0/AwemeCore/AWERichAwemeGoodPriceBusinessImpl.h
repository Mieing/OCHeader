@class NSString;
@protocol AWEPlayInteractionContextProtocol;

@interface AWERichAwemeGoodPriceBusinessImpl : NSObject <AWERichAwemeCustomInfoElementBusinessProtocol>

@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> playInteractionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowElementWithContext:(id)a0;
+ (void)checkIsValid:(id)a0;
+ (BOOL)checkAnchorTitleEmpty:(id)a0;

- (BOOL)shouldShowPriceWithModel:(id)a0;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)elementWillDisplayWithModel:(id)a0;
- (void)openGoodDetailPageWithModel:(id)a0;
- (id)getPriceAttributedStringWithProductInfo:(id)a0;
- (id)getPriceDescriptionAttributedStringWithString:(id)a0;
- (id)getSalesDescriptionAttributedStringWithString:(id)a0;
- (id)createbtmInfoDict;
- (void)calculatePrice:(long long)a0 getYuan:(long long *)a1 getJiao:(long long *)a2 getFen:(long long *)a3;
- (void).cxx_destruct;

@end
