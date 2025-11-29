@class AWEShareReflowIncentiveChatPrivateShareModel, NSString, AWEShareReflowIncentiveChatGroupShareModel;

@interface AWEShareReflowIncentiveChatModel : AWEBaseApiModel

@property (retain, nonatomic) AWEShareReflowIncentiveChatPrivateShareModel *privateShareInfo;
@property (retain, nonatomic) AWEShareReflowIncentiveChatGroupShareModel *groupShareInfo;
@property (nonatomic) long long bizStatusCode;
@property (copy, nonatomic) NSString *toast;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
