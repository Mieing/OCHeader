@class AWEMusicModel, NSNumber, NSString;

@interface RTVVoipRingtoneMusicChartMusicModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEMusicModel *musicInfo;
@property (retain, nonatomic) NSNumber *heat;
@property (nonatomic) BOOL canBackgroundPlay;
@property (nonatomic) BOOL hasCopyRight;
@property (retain, nonatomic) NSNumber *rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicInfoJSONTransformer;
+ (id)canBackgroundPlayJSONTransformer;
+ (id)hasCopyRightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
