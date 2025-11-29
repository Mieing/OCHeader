@class NSString;

@interface DTFLogAdditions : NSObject

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *UTDID;
@property (readonly, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *logServerURL;
@property (retain, nonatomic) NSString *configServerURL;
@property (retain, nonatomic) NSString *platformID;

+ (id)sharedInstance;

- (id)defaultUploadLogTypes;
- (void)logToFile:(id)a0;
- (long long)numberOfSyncLogs;
- (void).cxx_destruct;

@end
