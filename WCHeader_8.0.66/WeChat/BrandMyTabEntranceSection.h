@class BrandMyTabEntranceCardView, NSString, BrandMyTabEntranceCardInfo;

@interface BrandMyTabEntranceSection : WCFinderMyTabSectionController <BrandMyTabEntranceCardDelegate>

@property (retain, nonatomic) BrandMyTabEntranceCardInfo *cardInfo;
@property (retain, nonatomic) BrandMyTabEntranceCardView *cardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)getShowButtonsStrategy;
- (void)onViewWillAppear;
- (void)onViewDidAppear;
- (id)genReportInfo;
- (void)getRedDotInfo;
- (void)fetchAcct;
- (void)jumpPostPicture;
- (void)jumpPostText;
- (void)jumpProfile;
- (void)jumpNotify;
- (void)openWebUrl:(id)a0;
- (id)displayTitle;
- (id)createDisplayCard;
- (id)genOpenPublishParamsWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
