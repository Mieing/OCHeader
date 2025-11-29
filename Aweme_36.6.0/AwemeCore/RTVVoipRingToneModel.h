@class AWEMusicModel, NSString;

@interface RTVVoipRingToneModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isDigg;
@property (retain, nonatomic) AWEMusicModel *ringtone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)ringtoneTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
