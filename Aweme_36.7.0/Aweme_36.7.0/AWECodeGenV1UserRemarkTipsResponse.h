@class NSString;

@interface AWECodeGenV1UserRemarkTipsResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSString *mkey;
@property (copy, nonatomic) NSString *greeting;
@property (copy, nonatomic) NSString *mateApplyMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
