@class AWEGrouponLifeFeedsDiggInfo, AWEGrouponLifeFeedsAuthorInfo;

@interface AWEGrouponLifeFeedsUserInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEGrouponLifeFeedsAuthorInfo *authorInfo;
@property (retain, nonatomic) AWEGrouponLifeFeedsDiggInfo *diggInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
