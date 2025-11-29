@class NSArray, NSString, NSMutableSet, IESLiveGCDTimer;

@interface IESLiveHMDFilterManager : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSMutableSet *subSceneSet;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableTimer;
@property (retain, nonatomic) NSArray *ignoreTags;
@property (nonatomic) double timeInterval;
@property (nonatomic) double enterTime;
@property (copy, nonatomic) id /* block */ audienceCountBlock;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long startLiveMemory;
@property (nonatomic) unsigned long long roomMemory;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isECRoom;
@property (nonatomic) long long roomScene;

+ (id)roomScene2String:(long long)a0;
+ (id)defaultManager;

- (void)removeSubScene:(id)a0;
- (void)removeParams;
- (void)enterLiveRoom;
- (void)addSubScene:(id)a0;
- (void)setRoomScene:(long long)a0 isPreview:(BOOL)a1;
- (void)leaveLiveRoom;
- (void)removeHMDFilterValueForKey:(id)a0;
- (void)setHMDFilterValue:(id)a0 contextValue:(id)a1 forKey:(id)a2;
- (void)setLiveEpsiodeSeansonId:(long long)a0;
- (void)setHMDValue:(id)a0 forKey:(id)a1;
- (id)subSceneStringValue;
- (void)updateRoomState;
- (void)removeHMDContextValueForKey:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer:(double)a0;
- (void)setup;

@end
