@class NSString, NSNumber;

@interface IESLiveGameOpenPlatformAppInstanceContext : NSObject <IESLiveGameOpenPlatformAppInstanceContext>

@property (copy, nonatomic) NSString *ID;
@property (retain, nonatomic) NSNumber *gameId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *gameCategory;
@property (nonatomic) unsigned long long appType;
@property (nonatomic) unsigned long long versionType;
@property (nonatomic) unsigned long long launchGameSource;
@property (copy, nonatomic) NSString *versionNumber;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *connectionID;
@property (copy, nonatomic) NSString *startID;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *startMode;
@property (copy, nonatomic) NSString *sourceType;
@property (nonatomic) BOOL shouldAutoStart;
@property (nonatomic) BOOL isAudienceSelfExit;
@property (nonatomic) BOOL isExplainCardShowWhenStart;
@property (nonatomic) BOOL isXplay;
@property (retain, nonatomic) NSNumber *xplayPushStreamType;
@property (copy, nonatomic) NSString *xplayGameIdWithChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0;
- (void).cxx_destruct;

@end
