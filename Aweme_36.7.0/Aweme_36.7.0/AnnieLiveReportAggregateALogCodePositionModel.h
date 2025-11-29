@class NSString, NSNumber;

@interface AnnieLiveReportAggregateALogCodePositionModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *file;
@property (copy, nonatomic) NSString *function;
@property (retain, nonatomic) NSNumber *line;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
