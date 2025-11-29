@class NSString;

@interface ShakeActionReporter : NSObject

@property (nonatomic) long long actionTs;
@property (nonatomic) int type;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) int action;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *songTVId;
@property (nonatomic) long long indexInList;
@property (nonatomic) unsigned int userGender;
@property (copy, nonatomic) NSString *userDistance;
@property (nonatomic) unsigned int userHasSignature;
@property (nonatomic) long long shakeCostTime;
@property (copy, nonatomic) NSString *shakeSessionId;
@property (copy, nonatomic) NSString *songName;
@property (copy, nonatomic) NSString *singer;
@property (copy, nonatomic) NSString *songWebUrl;
@property (copy, nonatomic) NSString *songDataUrl;
@property (nonatomic) unsigned int jumpStatus;
@property (nonatomic) unsigned int songRecommendPos;
@property (nonatomic) unsigned int songCopyright;
@property (nonatomic) unsigned int musicScene;
@property (nonatomic) unsigned int sayHelloCount;

+ (id)reporter;
+ (void)reportAction:(int)a0;

- (id)init;
- (void)reset;
- (void)report;
- (void)tryAddString:(id)a0 toString:(id)a1;
- (void)tryAddInteger:(long long)a0 toString:(id)a1;
- (void)updateShakeType;
- (void)updateShakeScene;
- (void)updateSongCopyright:(unsigned long long)a0;
- (void).cxx_destruct;

@end
