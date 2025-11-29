@class NSString;

@interface WCFinderSlideTextForRemarkVCParams : NSObject

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *topTitle;
@property (copy, nonatomic) NSString *finishWording;
@property (nonatomic) long long maxCharLength;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (copy, nonatomic) NSString *guideIconUrl;
@property (nonatomic) double guideBubbleMaxWidth;
@property (nonatomic) BOOL linkStyle;
@property (nonatomic) double customHalfScreenHeight;
@property (nonatomic) BOOL isPushed;

+ (id)paramsWithShopJumpInfo:(id)a0;

- (void).cxx_destruct;

@end
