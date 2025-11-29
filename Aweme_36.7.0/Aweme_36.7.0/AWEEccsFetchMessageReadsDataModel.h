@class NSString;

@interface AWEEccsFetchMessageReadsDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) id readIndexInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
