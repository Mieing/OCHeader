@class NSString;

@interface WCFinderJumperLiveroomParams : NSObject

@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned long long liveId;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (copy, nonatomic) NSString *bypReportChnlExtra;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)paramsFromLiveNecessaryParamsJSON:(id)a0;
+ (id)paramsFromLiveLivingStyle:(id)a0;

- (id)convertToLiveNecessaryParams;
- (void).cxx_destruct;

@end
