@class NSString;

@interface MMEmoticonRewardPageContext : MMEmoticonLiteAppPageContextBase

@property (nonatomic) unsigned long long rewardScene;
@property (retain, nonatomic) NSString *productId;

- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (void).cxx_destruct;

@end
