@class NSNumber, NSString;

@interface IESLiveShowPaidLiveTicketEditPageUploadConfigModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *sliceSize;
@property (retain, nonatomic) NSNumber *socketNum;
@property (copy, nonatomic) NSString *traceId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
