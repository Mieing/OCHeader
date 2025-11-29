@class WCFinderBulletItemTextView, NSString, WCFinderBulletCommentInfo, ResolvedEnhancedLabel;

@interface WCFinderBulletItem : NSObject

@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long likeCount;
@property (nonatomic) BOOL isSelfLike;
@property (retain, nonatomic) id extension;
@property (retain, nonatomic) WCFinderBulletCommentInfo *commentInfo;
@property (nonatomic) double appearPoint;
@property (nonatomic) double length;
@property (nonatomic) double showedPoint;
@property (nonatomic) double disappearPoint;
@property (retain, nonatomic) ResolvedEnhancedLabel *resolvedLabel;
@property (weak, nonatomic) WCFinderBulletItemTextView *textView;

+ (double)timeRange;
+ (unsigned long long)timeRangeIndexInPoint:(double)a0;
+ (id)itemWithInfo:(id)a0;

- (unsigned long long)timeRangeIndex;
- (void)updateWithOperateAction:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
