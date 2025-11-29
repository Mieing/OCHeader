@class NSString, NSDictionary;

@interface NLEMediaRemoteConfig_OC : NSObject

@property (retain, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSString *secretAccessKey;
@property (retain, nonatomic) NSString *sessionToken;
@property (retain, nonatomic) NSString *user;
@property (retain, nonatomic) NSString *uploader;
@property (retain, nonatomic) NSString *uploadStoreType;
@property (retain, nonatomic) NSString *date;
@property (retain, nonatomic) NSString *application;
@property (retain, nonatomic) NSDictionary *controlParams;
@property (retain, nonatomic) NSString *taskList;
@property (nonatomic) unsigned long long getProgressTaskInternalMs;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *area;
@property (retain, nonatomic) NSString *editAction;
@property (retain, nonatomic) NSString *scene;
@property (nonatomic) long long cacheStrategy;
@property (nonatomic) int requestTimeOutSecond;

- (void).cxx_destruct;
- (id)init;

@end
