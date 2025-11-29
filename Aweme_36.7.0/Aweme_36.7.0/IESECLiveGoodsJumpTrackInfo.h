@class NSString, IESECLiveActionQualityTracker, IESECBTMModel;

@interface IESECLiveGoodsJumpTrackInfo : NSObject

@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *clickArea;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (retain, nonatomic) IESECLiveActionQualityTracker *actionQualityTracker;

- (void).cxx_destruct;

@end
