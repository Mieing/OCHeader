@class NSString, AWEGuideLunaPopViewCommentUserInfo;

@interface AWEGuideLunaPopViewCommentInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long countDigged;
@property (retain, nonatomic) AWEGuideLunaPopViewCommentUserInfo *user;
@property (nonatomic) long long createTime;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
