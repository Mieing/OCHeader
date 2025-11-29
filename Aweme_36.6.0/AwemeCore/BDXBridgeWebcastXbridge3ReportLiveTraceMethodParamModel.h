@class NSString, NSDictionary;

@interface BDXBridgeWebcastXbridge3ReportLiveTraceMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *step;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSDictionary *index;
@property (copy, nonatomic) NSDictionary *metric;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
