@class NSString;

@interface AWEEcomSearchMiddlePageModelPerformance : MTLModel <MTLJSONSerializing>

@property (nonatomic) double requestTime;
@property (nonatomic) double responseTime;
@property (nonatomic) double postDataTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
