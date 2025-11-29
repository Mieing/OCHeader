@class NSString, AWEURLModel;

@interface AWEMusicAudioKTVSingerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (retain, nonatomic) AWEURLModel *avatarMedium;
@property (retain, nonatomic) AWEURLModel *avatarLarge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)avatarLargeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
