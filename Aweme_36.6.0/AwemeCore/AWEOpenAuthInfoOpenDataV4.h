@class NSString, NSArray;
@protocol AWEOpenAuthInfoCommentDataProtocol, AWEOpenAuthInfoFollowDataProtocol, AWEOpenAuthInfoScopeLevelItemDataProtocol, AWEOpenAuthInfoRiskDataProtocol, AWEOpenAuthInfoUserDataProtocol, AWEOpenAuthInfoClientDataProtocol, AWEOpenAuthInfoProtocolInfoDataProtocol, AWEOpenAuthInfoScopeDataProtocol;

@interface AWEOpenAuthInfoOpenDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoOpenDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWEOpenAuthInfoUserDataProtocol> userData;
@property (retain, nonatomic) id<AWEOpenAuthInfoClientDataProtocol> clientInfo;
@property (retain, nonatomic) id<AWEOpenAuthInfoScopeDataProtocol> scopeInfo;
@property (retain, nonatomic) id<AWEOpenAuthInfoScopeLevelItemDataProtocol> userInfostageScopes;
@property (retain, nonatomic) id<AWEOpenAuthInfoScopeLevelItemDataProtocol> basicScopes;
@property (retain, nonatomic) id<AWEOpenAuthInfoScopeLevelItemDataProtocol> mediumScopes;
@property (retain, nonatomic) id<AWEOpenAuthInfoScopeLevelItemDataProtocol> highScopes;
@property (retain, nonatomic) id<AWEOpenAuthInfoCommentDataProtocol> comment;
@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) NSArray *sceneFlowInfoArray;
@property (retain, nonatomic) NSArray *sceneBindInfoArray;
@property (retain, nonatomic) id<AWEOpenAuthInfoRiskDataProtocol> riskData;
@property (retain, nonatomic) id<AWEOpenAuthInfoFollowDataProtocol> followInfos;
@property (retain, nonatomic) id<AWEOpenAuthInfoProtocolInfoDataProtocol> protocolInfo;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) long long microappTheme;

+ (id)commentJSONTransformer;
+ (id)userDataJSONTransformer;
+ (id)clientInfoJSONTransformer;
+ (id)scopeInfoJSONTransformer;
+ (id)basicScopesJSONTransformer;
+ (id)mediumScopesJSONTransformer;
+ (id)highScopesJSONTransformer;
+ (id)sceneFlowInfoArrayJSONTransformer;
+ (id)sceneBindInfoArrayJSONTransformer;
+ (id)riskDataJSONTransformer;
+ (id)followInfosJSONTransformer;
+ (id)protocolInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)createRiskDataIfNeeded;
- (void).cxx_destruct;

@end
