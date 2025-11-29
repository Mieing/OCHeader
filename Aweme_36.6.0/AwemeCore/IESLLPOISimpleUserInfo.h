@class NSString, IESLLifeURLModel;

@interface IESLLPOISimpleUserInfo : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) IESLLifeURLModel *avatorThumb;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
