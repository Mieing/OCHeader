@class OriginalSoundInfo, BuzzwordInfo, FinderCommentInfo, NSMutableArray;

@interface DescCarouselInfo : WXPBGeneratedMessage

@property (retain, nonatomic) BuzzwordInfo *buzzwordInfo;
@property (retain, nonatomic) OriginalSoundInfo *originalSoundInfo;
@property (retain, nonatomic) FinderCommentInfo *descCommentInfo;
@property (retain, nonatomic) NSMutableArray *jumpInfo;

+ (void)initialize;

- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setDescCommentInfo:(id)a0;
- (id)descCommentInfo;
- (void)setOriginalSoundInfo:(id)a0;
- (id)originalSoundInfo;
- (void)setBuzzwordInfo:(id)a0;
- (id)buzzwordInfo;

@end
