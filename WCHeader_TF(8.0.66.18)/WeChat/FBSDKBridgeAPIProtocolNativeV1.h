@class NSString, UIPasteboard;

@interface FBSDKBridgeAPIProtocolNativeV1 : NSObject <FBSDKBridgeAPIProtocol>

@property (readonly, copy, nonatomic) NSString *appScheme;
@property (readonly, nonatomic) unsigned long long dataLengthThreshold;
@property (readonly, nonatomic, getter=shouldIncludeAppIcon) BOOL includeAppIcon;
@property (readonly, nonatomic) UIPasteboard *pasteboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearData:(id)a0 fromPasteboardOnApplicationDidBecomeActive:(id)a1;

- (id)initWithAppScheme:(id)a0;
- (id)initWithAppScheme:(id)a0 pasteboard:(id)a1 dataLengthThreshold:(unsigned long long)a2 includeAppIcon:(BOOL)a3;
- (id)requestURLWithActionID:(id)a0 scheme:(id)a1 methodName:(id)a2 methodVersion:(id)a3 parameters:(id)a4 error:(id *)a5;
- (id)responseParametersForActionID:(id)a0 queryParameters:(id)a1 cancelled:(BOOL *)a2 error:(id *)a3;
- (id)_appIcon;
- (id)_bridgeParametersWithActionID:(id)a0 error:(id *)a1;
- (id)_errorWithDictionary:(id)a0;
- (id)_JSONStringForObject:(id)a0 enablePasteboard:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
