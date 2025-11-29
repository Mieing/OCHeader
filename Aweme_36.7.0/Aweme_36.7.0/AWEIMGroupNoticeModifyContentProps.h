@class UIColor, NSAttributedString, UIImage;

@interface AWEIMGroupNoticeModifyContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (nonatomic) BOOL sendFromMe;
@property (retain, nonatomic) UIColor *lineBGColor;
@property (retain, nonatomic) NSAttributedString *titleText;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct CGSize { double width; double height; } ImageSize;
@property (retain, nonatomic) UIColor *imageColor;
@property (retain, nonatomic) NSAttributedString *contentText;

- (void).cxx_destruct;

@end
