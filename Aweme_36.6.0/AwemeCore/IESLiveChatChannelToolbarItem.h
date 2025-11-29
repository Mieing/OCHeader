@class NSString, UIImage, UIView;

@interface IESLiveChatChannelToolbarItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ itemTap;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *accessibilityString;

- (void)tapEvent;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
