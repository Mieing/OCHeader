@class NSString, UIImageView, UILabel, UIButton;

@interface IESECMallLoginView : UIView <IESECMallLoginViewProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *subTipLabel;
@property (retain, nonatomic) UIButton *loginButton;
@property (nonatomic) unsigned long long theme;
@property (copy, nonatomic) id /* block */ loginBtnClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
