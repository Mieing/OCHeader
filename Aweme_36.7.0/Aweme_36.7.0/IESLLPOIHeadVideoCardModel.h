@class NSString, NSArray;

@interface IESLLPOIHeadVideoCardModel : IESLLifeBaseApiModel

@property (nonatomic) BOOL hasVideo;
@property (nonatomic) long long userCnt;
@property (retain, nonatomic) NSString *entryDesc;
@property (retain, nonatomic) NSArray *avatarIconList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
