@class NSString;

@interface BDXBridgeEcMallReportAlogListLogList : BDXBridgeModel

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long level;

+ (id)levelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
