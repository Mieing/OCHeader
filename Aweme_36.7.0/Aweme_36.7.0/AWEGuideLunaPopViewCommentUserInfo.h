@class NSString, AWEURLModel;

@interface AWEGuideLunaPopViewCommentUserInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatar;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
