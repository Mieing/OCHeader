@class NSString;

@interface AWEIMLocalInviteJoinFansGroupCardModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) long long groupCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
