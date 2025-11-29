@class NSString, UIImageView, UILabel, UIButton;

@interface ACCAlbumDenyAccessView : UIView <CAKAlbumRequestAccessViewProtocol>

@property (retain, nonatomic) UILabel *accessAlbumLabel;
@property (retain, nonatomic) UILabel *accessAllPhotoLabel;
@property (retain, nonatomic) UIImageView *tipsImage;
@property (retain, nonatomic) UIButton *startSettingButton;
@property (nonatomic) long long themeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
