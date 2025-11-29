@class HTSLiveGiftComment;

@interface HTSLiveGiftCommentWallContent : IESLivePBBaseMessage

@property (nonatomic) BOOL existCommentOnWall;
@property (retain, nonatomic) HTSLiveGiftComment *comment;
@property (nonatomic) BOOL hasComment;

+ (id)descriptor;

@end
