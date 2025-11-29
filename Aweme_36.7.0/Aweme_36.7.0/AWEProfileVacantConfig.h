@class NSString, UIImage;

@interface AWEProfileVacantConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (copy, nonatomic) id /* block */ attributedDetailBlock;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *linkTitle;
@property (copy, nonatomic) id /* block */ didClickButtonBlock;
@property (copy, nonatomic) id /* block */ didClickLinkBlock;
@property (copy, nonatomic) id /* block */ customLayoutBlock;
@property (copy, nonatomic) id /* block */ marginTopLayoutBlock;
@property (copy, nonatomic) id /* block */ centerYoffsetLayoutBlock;

- (void).cxx_destruct;

@end
