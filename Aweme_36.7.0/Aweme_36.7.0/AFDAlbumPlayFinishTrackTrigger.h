@class NSTimer, NSString;
@protocol AFDAlbumPlayFinishTrackTriggerOwner;

@interface AFDAlbumPlayFinishTrackTrigger : NSObject <AFDAlbumPlayFinishTrackTriggerProtocol>

@property (nonatomic) BOOL hasTracked;
@property (nonatomic) BOOL isTailImagePlayed;
@property (nonatomic) BOOL isDurationEnough;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<AFDAlbumPlayFinishTrackTriggerOwner> owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transferFrom:(id)a0 to:(id)a1;

- (id)awemeModel;
- (void)tailImagePlayFinishByManual:(BOOL)a0;
- (void)destroyTimer;
- (void)tryTrigger;
- (BOOL)checkAwemeType;
- (long long)albumFinishTrackerTimeDuration;
- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)pauseTimer;
- (void)dealloc;
- (void)resumeTimer;
- (void)createTimer;

@end
