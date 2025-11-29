@class NSString, NSDictionary;

@interface ADFGBridgeCommand : NSObject

@property (copy, nonatomic) NSString *bridgeName;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *JSSDKVersion;
@property (nonatomic) unsigned long long bridgeType;
@property (nonatomic) long long bridgeMsg;
@property (copy, nonatomic) NSString *pluginName;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *methodName;
@property (readonly, nonatomic) NSString *wrappedParamsString;

+ (id)commandWithMethod:(id)a0 params:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictonary:(id)a0;

@end
