@class AWELeftSlideNMinConfigModel, NSString, AWELeftSlidPredictConfigModel, AWEECJumpToMallContextModel, NSDictionary, AWEECPredictInfoModel;

@interface AWEECVideoToMallGetParamsObject : NSObject

@property (retain, nonatomic) AWEECJumpToMallContextModel *currentContext;
@property (retain, nonatomic) AWEECJumpToMallContextModel *nMinContext;
@property (retain, nonatomic) AWELeftSlideNMinConfigModel *nMinConfig;
@property (retain, nonatomic) AWELeftSlidPredictConfigModel *predictConfig;
@property (retain, nonatomic) NSString *implicitProduct;
@property (retain, nonatomic) AWEECPredictInfoModel *predictProductInfo;
@property (retain, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
