@class NSString;

@interface RTVJetConfigOptions : JSONModel <RTVJetConfigOptionsProtocol>

@property (nonatomic) int service;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) unsigned long long httpMaxTry;
@property (nonatomic) unsigned long long webSocketMaxTry;
@property (nonatomic) double backoffDuration;
@property (nonatomic) double webSocketTimeout;
@property (nonatomic) double httpTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
