@class NSNumber;

@interface AFDColorRingEnterMomentCameraParameter : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isLandingNotesTab;
@property (retain, nonatomic) NSNumber *myNotesCellPublish;

- (void)setupForMyAvatarEnter;
- (void)setupForPublishNotesEnter;
- (id)generateParameters;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;

@end
