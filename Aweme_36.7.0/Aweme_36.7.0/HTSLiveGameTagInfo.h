@class NSString;

@interface HTSLiveGameTagInfo : IESLivePBBaseMessage

@property (nonatomic) int isGame;
@property (nonatomic) long long gameTagId;
@property (copy, nonatomic) NSString *gameTagName;

+ (id)descriptor;

- (id)gameTagName;
- (long long)gameTagId;
- (int)isGame;
- (void)setGameTagName:(id)a0;
- (void)setGameTagId:(long long)a0;
- (void)setIsGame:(int)a0;

@end
