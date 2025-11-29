@class NSString;

@interface AWEUserPunishLinkContent : AWEBaseApiModel

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long linkIndex;
@property (nonatomic) long long linkLength;
@property (copy, nonatomic) NSString *linkUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
