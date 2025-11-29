@class UIViewController, NSString, NSDictionary, CJPayProcessInfo, CJPayDefaultChannelShowConfig;
@protocol CJPayDeskRouteDelegate, CJPayAssetContextStoreDelegate;

@interface CJPaySignCardModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (nonatomic) BOOL isBaseVerify;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ loadingBlock;
@property (copy, nonatomic) id /* block */ cardSignCompleteBlock;
@property (copy, nonatomic) id /* block */ cardSignFinishBlock;
@property (copy, nonatomic) NSDictionary *signCardInfo;
@property (weak, nonatomic) id<CJPayDeskRouteDelegate> routerDelegate;
@property (weak, nonatomic) id<CJPayAssetContextStoreDelegate> contextDelegate;
@property (nonatomic) unsigned long long signCardType;

- (id)getSignCardExtParams:(id)a0 currentSelectedShowConfig:(id)a1;
- (void).cxx_destruct;

@end
