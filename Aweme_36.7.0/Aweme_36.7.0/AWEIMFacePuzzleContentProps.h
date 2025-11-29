@class UIImage, NSAttributedString, UIColor;

@interface AWEIMFacePuzzleContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) UIImage *bgImage;
@property (retain, nonatomic) UIImage *topImage;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *subTitle;
@property (copy, nonatomic) NSAttributedString *statusDes;
@property (copy, nonatomic) NSAttributedString *qtitle;
@property (nonatomic) BOOL isAnswer;
@property (nonatomic) BOOL isQuoteReply;
@property (nonatomic) BOOL hasBgImage;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UIColor *btnColor;

- (void).cxx_destruct;

@end
