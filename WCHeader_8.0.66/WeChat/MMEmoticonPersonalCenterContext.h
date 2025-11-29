@interface MMEmoticonPersonalCenterContext : MMEmoticonLiteAppPageContextBase

@property (nonatomic) long long emotionCenterScene;

- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (id)init;

@end
