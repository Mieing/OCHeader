@class NSString;

@interface AWEXBridgeSetFeedNeedsRefreshMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *caller;
@property (nonatomic) BOOL shouldRefresh;
@property (copy, nonatomic) NSString *refreshToastMsg;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
