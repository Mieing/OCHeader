@interface TAVRenderReportData : NSObject

@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) long long renderTime;
@property (nonatomic) double renderCostTime;
@property (nonatomic) long long decodeTime;
@property (nonatomic) double decodeCostTime;
@property (nonatomic) long long decodeSuccessTime;

@end
