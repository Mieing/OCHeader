@class UIColor, NSString, UIImage, UIView;

@interface IESLiveChatChannelMemberActionModel : NSObject

@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIImage *img;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIColor *contentColor;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) BOOL disableResponse;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;
- (void)tap;

@end
