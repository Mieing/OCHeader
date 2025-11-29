@class NSString;

@interface MMWebViewBackgroundAlbumAudioExtInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *bizUin;
@property (nonatomic) long long msgId;
@property (nonatomic) long long idx;
@property (nonatomic) long long scene;
@property (nonatomic) long long subScene;
@property (nonatomic) long long voiceType;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *playId;
@property (nonatomic) long long enterId;
@property (copy, nonatomic) NSString *albumPageUrl;
@property (nonatomic) long long audioPos;
@property (copy, nonatomic) NSString *albumTitle;
@property (copy, nonatomic) NSString *audioTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bizUin;
+ (void)PBArrayAdd_msgId;
+ (void)PBArrayAdd_idx;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_subScene;
+ (void)PBArrayAdd_playId;
+ (void)PBArrayAdd_voiceType;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_enterId;
+ (void)PBArrayAdd_albumPageUrl;
+ (void)PBArrayAdd_audioPos;
+ (void)PBArrayAdd_albumTitle;
+ (void)PBArrayAdd_audioTitle;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
