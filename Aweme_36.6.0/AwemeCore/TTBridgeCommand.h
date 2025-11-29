@class NSString, NSDictionary, NSMutableDictionary, NSURL, NSObject;

@interface TTBridgeCommand : NSObject

@property (nonatomic) unsigned long long bridgeType;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *messageUUID;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) long long bridgeMsg;
@property (copy, nonatomic) NSString *bridgeName;
@property (copy, nonatomic) NSString *methodNamespace;
@property (copy, nonatomic) NSString *pluginName;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *methodNameOfPlugin;
@property (copy, nonatomic) NSString *JSSDKVersion;
@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSString *endTime;
@property (retain, nonatomic) id originMessage;
@property (nonatomic) unsigned long long protocolType;
@property (retain, nonatomic) NSMutableDictionary *context;
@property (weak, nonatomic) NSObject *sourceObject;
@property (retain, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSString *frameURL;
@property (nonatomic) BOOL isMainFrame;
@property (readonly, nonatomic) NSString *wrappedParamsString;

+ (id)commandWithIESMessage:(id)a0;

- (id)toJSONString;
- (id)bpea_pageContext;
- (id)bpea_apiContext;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictonary:(id)a0;
- (id)rawDictionary;

@end
