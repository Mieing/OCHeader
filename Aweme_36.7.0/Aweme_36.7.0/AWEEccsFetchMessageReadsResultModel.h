@class AWEEccsFetchMessageReadsDataModel;

@interface AWEEccsFetchMessageReadsResultModel : IESLiveBridgeModel

@property (retain, nonatomic) AWEEccsFetchMessageReadsDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
