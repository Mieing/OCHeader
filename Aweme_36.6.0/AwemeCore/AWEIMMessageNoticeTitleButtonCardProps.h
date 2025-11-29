@class NSString, AWEIMUIImageViewPresenterProps;

@interface AWEIMMessageNoticeTitleButtonCardProps : AWEIMUIViewPresenterProps

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) AWEIMUIImageViewPresenterProps *iconProps;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void).cxx_destruct;
- (id)init;

@end
