@class NSString;

@interface CAKAlbumSearchListEmptyView : UIView <CAKAlbumListBlankViewProtocol>

@property (nonatomic) long long type;
@property (nonatomic) long long themeType;
@property (copy, nonatomic) id /* block */ clickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableDarkTheme:(id)a1;
- (void)updateIconImageInDarkMode;
- (void).cxx_destruct;

@end
