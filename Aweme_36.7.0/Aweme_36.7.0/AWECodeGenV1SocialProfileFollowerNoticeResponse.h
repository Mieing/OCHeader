@class NSString, AWECodeGenProfileNewFollowerNoticeModel;

@interface AWECodeGenV1SocialProfileFollowerNoticeResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) AWECodeGenProfileNewFollowerNoticeModel *p_newFollowerNoticeModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
