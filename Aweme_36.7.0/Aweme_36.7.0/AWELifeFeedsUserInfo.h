@class AWELifeFeedsAuthorInfo, AWELifeFeedsDiggInfo;

@interface AWELifeFeedsUserInfo : AWEBaseApiModel

@property (retain, nonatomic) AWELifeFeedsAuthorInfo *authorInfo;
@property (retain, nonatomic) AWELifeFeedsDiggInfo *diggInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
