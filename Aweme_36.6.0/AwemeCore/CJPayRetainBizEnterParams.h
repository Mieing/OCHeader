@class NSString, NSDictionary, CJPayAssetToCombineAssetInfoModel, CJPayAssetInfoModel, CJPayProcessInfo, UIViewController;
@protocol CJPayRetainTrackerProtocol;

@interface CJPayRetainBizEnterParams : NSObject

@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (retain, nonatomic) CJPayAssetInfoModel *assetInfoModel;
@property (retain, nonatomic) CJPayAssetToCombineAssetInfoModel *combineAssetInfoModel;
@property (copy, nonatomic) NSDictionary *extInfo;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *appId;
@property (weak, nonatomic) id<CJPayRetainTrackerProtocol> trackDelegate;
@property (copy, nonatomic) NSString *tradeNo;
@property (weak, nonatomic) UIViewController *sourceVC;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (copy, nonatomic) NSString *currentVerifyType;
@property (nonatomic) BOOL isBioDegrade;
@property (nonatomic) BOOL isSupportBio;

- (void).cxx_destruct;

@end
