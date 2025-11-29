@class UILabel, NSNumber;

@interface CAKAlbumSearchPermissionViewController : UIViewController

@property (retain, nonatomic) UILabel *detailLabel;
@property (copy, nonatomic) id /* block */ permissionChanged;
@property (copy, nonatomic) NSNumber *enableDarkTheme;

+ (id)showWithPermissionChanged:(id /* block */)a0 enableDarkTheme:(id)a1;

- (double)fitHeightWithWidth:(double)a0;
- (void).cxx_destruct;
- (id)detailText;
- (void)viewDidLoad;
- (id)detailFont;

@end
