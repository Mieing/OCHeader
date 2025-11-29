@class NSString, AWEIMMessageConversation;
@protocol ACCCreationSessionModel;

@interface AWEIMExchangeCameraBusinessConfiguration : NSObject <ACCCreationBusinessConfiguration>

@property (retain, nonatomic) id<ACCCreationSessionModel> sessionModel;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL isActivityScene;
@property (nonatomic) BOOL isToAlbumRandom;
@property (nonatomic) BOOL isOnlyExchangeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionModel:(id)a0;
- (id)businessSceneServiceProvider;
- (id)componentClassArray;
- (id)initWithSessionModel:(id)a0 conversation:(id)a1 isActivityScene:(BOOL)a2 isToAlbumRandom:(BOOL)a3 isOnlyExchangeLocation:(BOOL)a4;
- (void).cxx_destruct;

@end
