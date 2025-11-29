@class NSString;

@interface UTDSession : NSObject {
    long long lastBackgroundTime;
}

@property (nonatomic) long long pid;
@property (nonatomic) long long utPid;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *nick;
@property (retain, nonatomic) NSString *longNick;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *longUserID;
@property (nonatomic) long long sessionRefrshTime;

+ (id)sharedUTDSession;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)generateSessionID;
- (BOOL)vaild;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateSession;

@end
