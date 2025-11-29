@class NSString, NSDictionary;
@protocol FBSDKBridgeAPIProtocol;

@interface FBSDKBridgeAPIRequest : NSObject <FBSDKCopying>

@property (readonly, nonatomic) id<FBSDKBridgeAPIProtocol> protocol;
@property (readonly, copy, nonatomic) NSString *actionID;
@property (readonly, copy, nonatomic) NSString *methodName;
@property (readonly, copy, nonatomic) NSString *methodVersion;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) unsigned long long protocolType;
@property (readonly, copy, nonatomic) NSString *scheme;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgeAPIRequestWithProtocolType:(unsigned long long)a0 scheme:(id)a1 methodName:(id)a2 methodVersion:(id)a3 parameters:(id)a4 userInfo:(id)a5;
+ (id)protocolMap;
+ (id)_protocolForType:(unsigned long long)a0 scheme:(id)a1;

@end
