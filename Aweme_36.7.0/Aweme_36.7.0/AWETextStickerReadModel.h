@class NSString, NSArray;

@interface AWETextStickerReadModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL useTextRead;
@property (nonatomic) BOOL isCustomEffect;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *stickerKey;
@property (copy, nonatomic) NSString *audioPath;
@property (copy, nonatomic) NSString *soundEffect;
@property (copy, nonatomic) NSString *streamSoundEffect;
@property (copy, nonatomic) NSString *toneTab;
@property (copy, nonatomic) NSString *soundEffectID;
@property (copy, nonatomic) NSArray *challengeIds;
@property (copy, nonatomic) NSArray *challengeNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)useTextReadJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
