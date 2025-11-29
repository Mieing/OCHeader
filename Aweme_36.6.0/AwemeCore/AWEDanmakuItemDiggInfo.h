@class UIColor, NSString, SkityImage, UIImage, NSMutableAttributedString, SkityTextBlob;

@interface AWEDanmakuItemDiggInfo : NSObject

@property (retain, nonatomic) NSMutableAttributedString *numberText;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } numberTextFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } diggTotalFrame;
@property (nonatomic) BOOL digged;
@property (copy, nonatomic) NSString *diggImageName;
@property (retain, nonatomic) UIColor *numberTextColor;
@property (retain, nonatomic) SkityImage *skityImage;
@property (retain, nonatomic) SkityTextBlob *textBlob;

- (void)refreshDiggImage;
- (void).cxx_destruct;

@end
