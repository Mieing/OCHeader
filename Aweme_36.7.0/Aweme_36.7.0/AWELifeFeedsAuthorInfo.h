@class NSDictionary, AWEURLModel;

@interface AWELifeFeedsAuthorInfo : AWEBaseApiModel

@property (retain, nonatomic) NSDictionary *nickname;
@property (retain, nonatomic) AWEURLModel *avatar;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
