@class NSString, AWEBottomViewConfigModel, AWEAwemeModel, NSDictionary, NSIndexPath;

@interface AWEFeedBottomBarViewModel : NSObject

@property (retain, nonatomic) AWEBottomViewConfigModel *configModel;
@property (copy, nonatomic) NSString *leftImage;
@property (copy, nonatomic) NSString *bgImage;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *textBtn;
@property (copy, nonatomic) NSString *colorBtn;
@property (copy, nonatomic) NSString *bgColorBtn;
@property (copy, nonatomic) NSString *bdColorBtn;
@property (copy, nonatomic) NSString *bdWidthButton;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) BOOL isClickToEnter;
@property (copy, nonatomic) NSString *reactID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *params;

- (id)getCommonTrackDic;
- (void)rightButtonClicked;
- (void)trackForShowAction;
- (void)trackForJumpAction;
- (void)trackForCloseAction;
- (id)getCommonJumpDic;
- (void).cxx_destruct;

@end
