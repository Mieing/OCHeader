@class NSString, AnnieLiveReportAggregateALogCodePositionModel;

@interface AnnieLiveReportAggregateALogAlogsModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *level;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) AnnieLiveReportAggregateALogCodePositionModel *codePosition;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
