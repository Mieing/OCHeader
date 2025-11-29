@class NSString, AWECodeGenCommentModel, AWECodeGenMediumModel;

@interface AWECodeGenV1MediumGetCommentInfoResponse : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenCommentModel *commentModel;
@property (retain, nonatomic) AWECodeGenMediumModel *mediumInfoModel;
@property (copy, nonatomic) NSString *mediumJumpUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
