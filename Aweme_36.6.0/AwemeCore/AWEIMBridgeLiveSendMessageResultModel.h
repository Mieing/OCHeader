@class NSString;

@interface AWEIMBridgeLiveSendMessageResultModel : IESLiveBridgeModel

@property (retain, nonatomic) id data;
@property (copy, nonatomic) NSString *cid;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
