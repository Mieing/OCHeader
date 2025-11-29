@class NSString, UIColor, AWEURLModel;

@interface AWEIMSharePlayletVideoContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *cid;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) AWEURLModel *avatarUrlModel;

- (void).cxx_destruct;

@end
