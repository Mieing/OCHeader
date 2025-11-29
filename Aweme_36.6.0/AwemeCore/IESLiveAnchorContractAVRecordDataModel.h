@class NSString;

@interface IESLiveAnchorContractAVRecordDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *localUrl;
@property (copy, nonatomic) NSString *frameBase64;
@property (copy, nonatomic) NSString *localImg;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
