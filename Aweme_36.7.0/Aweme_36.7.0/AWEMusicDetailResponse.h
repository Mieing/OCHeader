@class AWEMusicDetailMusicModel, NSArray;

@interface AWEMusicDetailResponse : AWEBaseApiModel

@property (readonly, nonatomic) AWEMusicDetailMusicModel *firstMusic;
@property (copy, nonatomic) NSArray *musicList;
@property (nonatomic) BOOL disableMusicActivitySetting;
@property (copy, nonatomic) NSArray *musicActivityResourceInfos;
@property (copy, nonatomic) NSArray *loraModelIDList;

+ (id)musicListJSONTransformer;
+ (id)musicActivityResourceInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
