@class NSString;
@protocol Optional;

@interface RTVVoipInitialAction : JSONModel

@property (nonatomic) long long autoOpenStickerPanel;
@property (nonatomic) long long enterType;
@property (nonatomic) BOOL invokeFeedShare;
@property (nonatomic) BOOL cameraOff;
@property (nonatomic) BOOL doNotCheckInitialInviteResult;
@property (nonatomic) BOOL hideMatchEntrance;
@property (nonatomic) BOOL applySticker;
@property (nonatomic) BOOL invokeGame;
@property (nonatomic) BOOL micOff;
@property (nonatomic) BOOL disableDefaultNarrow;
@property (nonatomic) BOOL ignoreAudienceLiveCheck;
@property (nonatomic) BOOL autoNarrow;
@property (nonatomic) BOOL diableOpenCameraGuide;
@property (nonatomic) BOOL hangupVoipAfterExitInteraction;
@property (nonatomic) BOOL followUser;
@property (copy, nonatomic) NSString<Optional> *targetStickerID;
@property (copy, nonatomic) NSString<Optional> *selfStickerID;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;

- (long long)initialActions;
- (void)updateInitialActions:(long long)a0;
- (id)initWithInitialActions:(long long)a0;
- (void)mergeWithServerInitialActions:(id)a0;
- (void).cxx_destruct;

@end
