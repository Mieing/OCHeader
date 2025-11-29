@class UILabel, UIButton, NSString;

@interface CAKAlbumRequestAccessView : UIView <CAKAlbumRequestAccessViewProtocol>

@property (retain, nonatomic) UILabel *accessAlbumLabel;
@property (retain, nonatomic) UILabel *accessAllPhotoLabel;
@property (retain, nonatomic) UIButton *startSettingButton;
@property (nonatomic) long long themeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
