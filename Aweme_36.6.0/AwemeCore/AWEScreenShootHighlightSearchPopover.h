@class NSString, UIImageView, AWEAwemeModel, UIView, NSArray, NSDictionary;

@interface AWEScreenShootHighlightSearchPopover : UIView

@property (retain, nonatomic) UIView *thumbnailContentView;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (copy, nonatomic) NSString *searchContent;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *panelListArray;
@property (copy, nonatomic) NSDictionary *buttonTextDictionary;
@property (copy, nonatomic) id /* block */ clickSearchImage;
@property (copy, nonatomic) id /* block */ clickShareButton;
@property (copy, nonatomic) id /* block */ clickReportButton;
@property (copy, nonatomic) id /* block */ clickSearchButton;

- (void)p_searchButtonClicked;
- (void)setupUIWithSearchStyle3;
- (void)p_addEffectStyle:(long long)a0 onView:(id)a1;
- (id)createButtonWithStyle:(unsigned long long)a0 andType:(unsigned long long)a1;
- (id)p_getGestureForType:(unsigned long long)a0;
- (void)p_searchImageClicked;
- (id)p_getTitleTextForType:(unsigned long long)a0;
- (id)p_getDuxIconNameForType:(unsigned long long)a0;
- (id)p_getShortTitleTextForType:(unsigned long long)a0;
- (id)p_getDefaultTextForType:(unsigned long long)a0;
- (id)p_getShortTextByLongText:(id)a0;
- (void)p_shareButtonClicked;
- (void)p_reportButtonClicked;
- (void)setupUIWithSearchStyle:(unsigned long long)a0;
- (void).cxx_destruct;

@end
