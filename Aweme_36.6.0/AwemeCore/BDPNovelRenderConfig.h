@class NSString, UIImage;

@interface BDPNovelRenderConfig : NSObject

@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSString *fontColor;
@property (nonatomic) double titleFontSize;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) double lineSpace;
@property (nonatomic) double paragraphSpace;
@property (nonatomic) double titleLineSpace;
@property (copy, nonatomic) NSString *pageTurnMode;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (copy, nonatomic) NSString *contentErrorIcon;
@property (copy, nonatomic) NSString *contentErrorTitle;
@property (copy, nonatomic) NSString *contentErrorDesc;
@property (copy, nonatomic) NSString *contentErrorBtnText;
@property (nonatomic) double unlockMaskHeight;
@property (nonatomic) double unlockMaskTextBottomOffset;
@property (copy, nonatomic) NSString *unlockMaskText;
@property (copy, nonatomic) NSString *unlockMaskIcon;
@property (nonatomic) double paddingTop;
@property (nonatomic) double paddingRight;
@property (nonatomic) double paddingBottom;
@property (nonatomic) double paddingLeft;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } verticalScrollViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderContentFrame;
@property (copy, nonatomic) NSString *freeWordsUnlockMaskBlurImage;
@property (nonatomic) double freeWordsUnlockMaskHorizontalMinHeight;
@property (nonatomic) double freeWordsUnlockMaskVerticalMinHeight;
@property (copy, nonatomic) NSString *freeWordsUnlockMaskText;
@property (copy, nonatomic) NSString *freeWordsUnlockMaskIcon;
@property (nonatomic) double hotZoneWidth;
@property (nonatomic) BOOL nativeBackBtn;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toolBarRect;
@property (retain, nonatomic) UIImage *normalBack;
@property (retain, nonatomic) UIImage *darkBack;

- (void).cxx_destruct;

@end
