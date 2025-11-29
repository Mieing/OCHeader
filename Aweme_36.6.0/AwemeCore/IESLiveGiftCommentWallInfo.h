@class NSString;

@interface IESLiveGiftCommentWallInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) int anonymousType;

+ (id)descriptor;

@end
