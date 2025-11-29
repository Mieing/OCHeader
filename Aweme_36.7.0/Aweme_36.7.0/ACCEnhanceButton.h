@class UILabel, NSString;

@interface ACCEnhanceButton : UIButton <CAKAlbumPreviewPageTopViewSelectBtnProtocol>

@property (retain, nonatomic) UILabel *numberLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBtnState:(id)a0;
- (void)showWidgets:(BOOL)a0;
- (void).cxx_destruct;

@end
