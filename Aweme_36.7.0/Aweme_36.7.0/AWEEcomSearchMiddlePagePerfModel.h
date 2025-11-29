@class NSDictionary, NSString;

@interface AWEEcomSearchMiddlePagePerfModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double requestTime;
@property (nonatomic) double responseTime;
@property (nonatomic) double postDataTime;
@property (copy, nonatomic) NSDictionary *requestLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
