@class NSString, NSDictionary, AWEPOIDeliveryMenuBarUIModel, NSNumber;

@interface AWEPOIDeliveryMenuBarViewModel : DitoComponentViewModel

@property (nonatomic) BOOL isCollectedRequestOnAir;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isShowCollectBtn;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *shareImageUrl;
@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSString *shareDesc;
@property (copy, nonatomic) NSString *qrcodeShareInfo;
@property (copy, nonatomic) NSString *commandShareParams;
@property (copy, nonatomic) NSString *innerUrl;
@property (copy, nonatomic) NSString *reportUrl;
@property (retain, nonatomic) AWEPOIDeliveryMenuBarUIModel *startState;
@property (retain, nonatomic) AWEPOIDeliveryMenuBarUIModel *endState;
@property (nonatomic) double startShowElevatorOffset;
@property (nonatomic) double elevatorVisibleOffset;
@property (nonatomic) long long aweType;
@property (copy, nonatomic) NSDictionary *imExtra;
@property (retain) NSNumber *contentYOffset;
@property (copy, nonatomic) NSDictionary *lifeShareExt;
@property (nonatomic) BOOL isShowShareBtn;
@property (nonatomic) BOOL isShowSearchBtn;
@property (retain, nonatomic) NSString *searchEntryStyle;

- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (id)parseImExtraWith:(id)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
