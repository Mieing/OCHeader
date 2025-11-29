@class NSString, NSMutableDictionary, NSDictionary, NSNumber;

@interface IESBridgeSDKAuthMonitorEvent : NSObject <IESBridgeSDKAuthMonitor>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) long long authCode;
@property (copy, nonatomic) NSString *nameSpace;
@property (copy, nonatomic) NSNumber *packageVersion;
@property (copy, nonatomic) NSString *feId;
@property (copy, nonatomic) NSString *feIdMapper;
@property (nonatomic) long long feAuthConfigSource;
@property (nonatomic) long long methodAuthType;
@property (copy, nonatomic) NSString *authMode;
@property (copy, nonatomic) NSNumber *authStatus;
@property (copy, nonatomic) NSString *failedReason;
@property (nonatomic) long long groupAuthType;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *fromSource;
@property (nonatomic) long long stage;
@property (copy, nonatomic) NSString *successReason;
@property (nonatomic) BOOL isOnMainThread;
@property (copy, nonatomic) NSString *boeUrlString;
@property (retain, nonatomic) NSMutableDictionary *otherCategory;
@property (copy, nonatomic) NSString *messageUUID;
@property (nonatomic) BOOL isErrorEvent;
@property (nonatomic) long long viewType;
@property (nonatomic) BOOL isMainFrame;
@property (copy, nonatomic) NSString *frameURL;
@property (weak, nonatomic) id engineView;
@property (copy, nonatomic) NSString *requestTrackings;
@property (readonly, copy, nonatomic) NSDictionary *metric;
@property (readonly, copy, nonatomic) NSDictionary *category;
@property (readonly, copy, nonatomic) NSDictionary *errorInfoCategory;
@property (readonly, copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
