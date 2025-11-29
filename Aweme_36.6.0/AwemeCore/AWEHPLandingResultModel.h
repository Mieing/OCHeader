@class NSString, AWEHPLandingPitayaResultModel;

@interface AWEHPLandingResultModel : MTLModel <MTLJSONSerializing, AWEHPLandingResultModelProtocol>

@property (nonatomic) BOOL isDefault;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) long long landingCount;
@property (nonatomic) long long serverTime;
@property (retain, nonatomic) AWEHPLandingPitayaResultModel *pitaya;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateResultModelWithRawData:(id)a0 error:(id *)a1;
+ (id)JSONKeyPathsByPropertyKey;

@end
