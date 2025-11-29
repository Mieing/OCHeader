@class IESLLGoodsDetailPageContext, NSString, NSDictionary, NSMutableSet, UIImageView, UILabel, UITapGestureRecognizer;

@interface IESLLGDNavigationBarSearchView : UIView

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSMutableSet *thresholds;
@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *recommendWord;
@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *imprID;
@property (copy, nonatomic) NSString *gid;
@property (retain, nonatomic) UITapGestureRecognizer *clickRecognizer;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UILabel *placeHolderTextLabel;
@property (nonatomic) BOOL hasReqSearchWord;
@property (nonatomic) BOOL hasReportEntranceShow;
@property (nonatomic) BOOL hasReportTrendingWordsShow;
@property (nonatomic) BOOL recommendWordUpdated;
@property (nonatomic) BOOL viewDidAppear;
@property (weak, nonatomic) IESLLGoodsDetailPageContext *context;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *spuID;
@property (copy, nonatomic) NSString *lifeHomepageFreshType;
@property (copy, nonatomic) id /* block */ clickSendLog;
@property (copy, nonatomic) NSString *searchSchemaPrefix;
@property (retain, nonatomic) NSDictionary *searchSchemaMobParams;

- (void)entranceDidAppear;
- (void)trackEntranceShow;
- (void)reportTrackWithEventName:(id)a0 params:(id)a1;
- (void)fetchRecommandWordWithParams:(id)a0;
- (void)sendlogSearchWord;
- (id)searchSchemaWithEnterFromSecond:(id)a0;
- (id)appendRecommendWordToSearchSchema:(id)a0;
- (void)addClickEvent;
- (void)jumpToLifeMallSearch;
- (void)updatePlaceHolderText;
- (void)getSearchRecommendWordsWithParams:(id)a0 isAsync:(unsigned char)a1;
- (id)baseSearchSchema;
- (void)trackTrendingWordsShowIfNeeded;
- (id)p_getBtmInfo;
- (BOOL)didHitPOIBigFont;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
