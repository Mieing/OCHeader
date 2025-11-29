@class UIControl, AWETeenAlbumDataController, UIImageView, UIView, UILabel;

@interface AWETeenAlbumPanelCollectView : UIView

@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIControl *actionControl;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *albumCollectLabel;
@property (copy, nonatomic) id /* block */ albumCollectBlock;

- (void)p_configData;
- (void)p_setupBind;
- (void)clickAlbumCollect;
- (id)initWithDataController:(id)a0 type:(unsigned long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
