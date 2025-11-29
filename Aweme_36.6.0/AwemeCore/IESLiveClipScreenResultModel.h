@class IESLiveClipScreenDataModel;

@interface IESLiveClipScreenResultModel : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (retain, nonatomic) IESLiveClipScreenDataModel *data;

- (void).cxx_destruct;

@end
