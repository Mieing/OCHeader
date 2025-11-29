@class NSString;

@interface ASSInputArgumentZZZX : NSObject

@property (retain, nonatomic) NSString *utdid;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *userid;
@property (nonatomic) int envMode;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appKeyClient;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *traceid;
@property (retain, nonatomic) NSString *reason;
@property (copy, nonatomic) id /* block */ openCallback;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *encodeUmid;
@property (nonatomic) BOOL forceReport;

- (void).cxx_destruct;

@end
