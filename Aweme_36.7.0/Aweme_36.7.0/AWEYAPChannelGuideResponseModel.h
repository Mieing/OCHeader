@class NSString, AWEYAPChannelGuideContentInfo;

@interface AWEYAPChannelGuideResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *retStatus;
@property (copy, nonatomic) NSString *retCode;
@property (copy, nonatomic) NSString *retMsg;
@property (retain, nonatomic) AWEYAPChannelGuideContentInfo *ruleContentInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
