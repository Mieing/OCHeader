@class NSString;
@protocol ACCCreationSessionModel;

@interface CECMomentCameraBusinessConfiguration : NSObject <ACCCreationBusinessConfiguration>

@property (retain, nonatomic) id<ACCCreationSessionModel> sessionModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionModel:(id)a0;
- (id)oldComponentClassArrayWith:(id)a0;
- (id)businessSceneServiceProvider;
- (id)componentClassArray;
- (void).cxx_destruct;

@end
