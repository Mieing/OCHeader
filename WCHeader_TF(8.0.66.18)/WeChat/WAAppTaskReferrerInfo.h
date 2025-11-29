@class NSString, NSDictionary, WAContact;

@interface WAAppTaskReferrerInfo : NSObject

@property (retain, nonatomic) NSString *referrerAppID;
@property (nonatomic) unsigned int referrerType;
@property (retain, nonatomic) NSString *agentId;
@property (retain, nonatomic) id referrerData;
@property (retain, nonatomic) id privateReferrerData;
@property (retain, nonatomic) NSString *messageExtraData;
@property (nonatomic) unsigned long long operateScene;
@property (retain, nonatomic) NSString *referAction;
@property (retain, nonatomic) NSString *refererSessionID;
@property (nonatomic) unsigned int refererAppServiceType;
@property (retain, nonatomic) NSDictionary *externalFileRefs;
@property (nonatomic) unsigned int originScene;
@property (retain, nonatomic) WAContact *hostContact;
@property (retain, nonatomic) NSString *hostUserName;
@property (nonatomic) unsigned int hostVersion;
@property (nonatomic) unsigned int pluginSessionID;
@property (retain, nonatomic) NSString *gameliveInfo;

- (id)description;
- (void).cxx_destruct;

@end
