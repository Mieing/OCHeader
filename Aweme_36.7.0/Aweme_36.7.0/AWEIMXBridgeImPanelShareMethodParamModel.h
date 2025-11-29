@class NSNumber, NSString, NSArray;

@interface AWEIMXBridgeImPanelShareMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) id content;
@property (retain, nonatomic) NSNumber *msgType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSNumber *filterGroup;
@property (copy, nonatomic) NSString *ext;
@property (retain, nonatomic) NSNumber *forceLight;
@property (copy, nonatomic) NSString *mobExt;
@property (retain, nonatomic) NSNumber *forbidSingleFollow;
@property (retain, nonatomic) NSNumber *forbidToastAfterShare;
@property (retain, nonatomic) NSNumber *disableCreateGroup;
@property (retain, nonatomic) NSNumber *filterBlockedRelation;
@property (retain, nonatomic) NSArray *disabledSecUids;
@property (retain, nonatomic) NSArray *onlyShowSecUids;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
