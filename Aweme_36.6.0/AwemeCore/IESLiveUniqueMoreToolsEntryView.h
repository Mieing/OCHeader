@class UIImageView, HTSLiveToolbarItem;

@interface IESLiveUniqueMoreToolsEntryView : UIView <HTSLivePluginLayoutView>

@property (nonatomic) long long entryStyle;
@property (retain, nonatomic) UIImageView *itemBgView;
@property (retain, nonatomic) UIImageView *backgroundShadow;
@property (retain, nonatomic) UIImageView *separatorView;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;

- (void)didTapped;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)initWith:(id)a0 entryStyle:(long long)a1;
- (void).cxx_destruct;
- (id)viewType;

@end
