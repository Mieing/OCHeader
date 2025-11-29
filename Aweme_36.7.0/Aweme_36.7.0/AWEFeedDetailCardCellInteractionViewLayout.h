@class UIFont;

@interface AWEFeedDetailCardCellInteractionViewLayout : NSObject

@property (nonatomic) long long configType;
@property (retain, nonatomic) UIFont *buttonFont;
@property (nonatomic) double stackViewLeftOffset;
@property (nonatomic) double stackViewRightOffset;
@property (nonatomic) double stackViewTopOffset;
@property (nonatomic) double stackViewBottomOffset;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) BOOL needReplaceW;

+ (id)playInteractionViewLayoutForStablePage;
+ (id)playInteractionViewLayoutForRVCard;
+ (id)playInteractionViewLayoutWithType:(long long)a0;

- (void).cxx_destruct;

@end
