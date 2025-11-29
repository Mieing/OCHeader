@class NSString;

@interface AWEMusicDiversionAuthorInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *authorUid;
@property (copy, nonatomic) NSString *authorSecretID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
