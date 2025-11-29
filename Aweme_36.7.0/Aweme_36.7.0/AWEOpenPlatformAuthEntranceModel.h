@class NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface AWEOpenPlatformAuthEntranceModel : NSObject

@property (retain, nonatomic) NSString *authID;
@property (copy, nonatomic) NSString *clientKey;
@property (nonatomic) unsigned long long authFlowType;
@property (copy, nonatomic) NSString *entrance;
@property (nonatomic) unsigned long long pageType;
@property (copy, nonatomic) NSDictionary *scopes;
@property (copy, nonatomic) NSDictionary *identityScope;
@property (copy, nonatomic) NSString *QRToken;
@property (copy, nonatomic) NSDictionary *templateIDs;
@property (nonatomic) BOOL notSkipConfirm;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *responseType;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSNumber *authStartStamp;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *appIdentity;
@property (copy, nonatomic) NSString *redirectURI;
@property (copy, nonatomic) NSString *redirectLink;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *customSceneAuthWhen;
@property (copy, nonatomic) NSString *openExtraStr;
@property (nonatomic) BOOL needTelNumBindFromSDK;
@property (nonatomic) BOOL showSwitchAccountPanel;
@property (copy, nonatomic) NSString *originalSchema;
@property (copy, nonatomic) NSDictionary *originalParams;
@property (copy, nonatomic) NSString *agreementId;
@property (nonatomic) BOOL protoShow;
@property (copy, nonatomic) id /* block */ originalBlock;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) BOOL isExternalWebAuth;
@property (nonatomic) BOOL openplatformAfterSwitchAccount;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *localScopes;
@property (nonatomic) BOOL isBdpUnionAuth;
@property (retain) NSString *stages;
@property (retain) NSString *stagesTimestamp;
@property (retain) NSMutableDictionary *sdkTimeLineExtraInfo;

- (BOOL)checkValid;
- (void)updateTrackerInfo:(id)a0;
- (id)getAuthFlowTypeToString;
- (id)getOpenFromWithFlowType;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
