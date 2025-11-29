@class OriginalSoundInfo, BuzzwordInfo, FinderCommentInfo, NSMutableArray;

@interface DescCarouselInfo : WXPBGeneratedMessage

@property (retain, nonatomic) BuzzwordInfo *buzzwordInfo;
@property (retain, nonatomic) OriginalSoundInfo *originalSoundInfo;
@property (retain, nonatomic) FinderCommentInfo *descCommentInfo;
@property (retain, nonatomic) NSMutableArray *jumpInfo;

+ (void)initialize;

@end
