@class NSArray, NSString, RTVVoipRingtoneMusicChartMusicModel;

@interface RTVVoipRingtoneMusicChartDetailModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) RTVVoipRingtoneMusicChartMusicModel *music;
@property (retain, nonatomic) NSArray *awemeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeListJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
