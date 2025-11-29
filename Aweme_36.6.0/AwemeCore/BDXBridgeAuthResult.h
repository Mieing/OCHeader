@class NSString, NSDictionary, BDXBridgeAuthModelContentV2BizConfig, NSNumber;

@interface BDXBridgeAuthResult : NSObject

@property (nonatomic) BOOL isAuthorized;
@property (nonatomic) long long reasonType;
@property (nonatomic) long long methodAuthType;
@property (nonatomic) long long groupAuthType;
@property (retain, nonatomic) BDXBridgeAuthModelContentV2BizConfig *bizConfig;
@property (nonatomic) BOOL hasMatchedRule;
@property (nonatomic) BOOL inIncludeMethods;
@property (nonatomic) long long authProcessStage;
@property (copy, nonatomic) NSString *feId;
@property (copy, nonatomic) NSString *feIdMapper;
@property (nonatomic) long long feAuthConfigSource;
@property (retain, nonatomic) NSNumber *packageVersion;
@property (copy, nonatomic) NSString *requestTrackings;
@property (retain, nonatomic) NSDictionary *rewriteParams;

+ (id)authResultReasonDescriptionForAuthResultReasonType:(long long)a0;
+ (id)authResultReasonDescriptionForAuthMode:(long long)a0;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
