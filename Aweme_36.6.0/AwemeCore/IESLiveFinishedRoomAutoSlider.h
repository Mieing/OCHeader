@class NSString, HTSEventContext, NSMutableArray, NSNumber;
@protocol IESLiveSlideControlService;

@interface IESLiveFinishedRoomAutoSlider : NSObject

@property (nonatomic) BOOL autoSlideEnabled;
@property (nonatomic) unsigned long long autoSlideCount;
@property (weak, nonatomic) id<IESLiveSlideControlService> slideService;
@property (nonatomic) unsigned long long maxSlideCount;
@property (retain, nonatomic) NSMutableArray *enteredRoomIds;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSNumber *initialRoomId;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) id /* block */ liveFinished;
@property (copy, nonatomic) id /* block */ didEnterRoom;

- (void)loadSettingConfig;
- (void)roomFinishedWithModel:(id)a0;
- (void)enterRoomSucceed:(id)a0;
- (BOOL)isSlideEnabledWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (BOOL)shouldSkipFirstRoomWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)initWithSlideService:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 initialRoomId:(id)a3 eventContext:(id)a4;
- (void).cxx_destruct;

@end
