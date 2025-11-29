@class NSString, AWEEcomSearchMiddlePagePerfModel;

@interface AWEEcomSearchMiddlePageTransferModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *response;
@property (retain, nonatomic) AWEEcomSearchMiddlePagePerfModel *performance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)performanceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
