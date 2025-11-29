@class NSString, NSArray;

@interface MMFinderLiveQuickReplyModel : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *originTitle;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double maxContentWidth;
@property (nonatomic) double font;
@property (retain, nonatomic) NSArray *styles;
@property (nonatomic) long long wordingType;
@property (nonatomic) BOOL isExposeReportedInCommentScene;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isModelDirectPost;
- (long long)getRecommendCommentType;
- (void).cxx_destruct;

@end
