@class NSNumber, NSString, AWEMusicAudioKTVSingerModel;

@interface AWEMusicAudioKTVModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) long long totalUserCount;
@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEMusicAudioKTVSingerModel *singer;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroudImageJSONTransformer;
+ (id)singerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
