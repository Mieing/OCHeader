@class MMLiveTaskId;

@interface MMLiveBigEmoticonCommentStyleInfo : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) double minEmotionSize;
@property (nonatomic) double maxEmotionSize;
@property (nonatomic) BOOL preferInlineComment;
@property (nonatomic) BOOL useClearBackground;

- (id)initWithTaskId:(id)a0;
- (void)createStyleInfo;
- (void).cxx_destruct;

@end
