@class UINavigationController, NSString, WCFinderPOIParamsModel, UIViewController;

@interface WCFinderPOIRelatedStreamOpenParams : NSObject

@property (retain, nonatomic) UINavigationController *navVC;
@property (retain, nonatomic) UIViewController *fromVC;
@property (nonatomic) BOOL disableHoldHalfScreen;
@property (nonatomic) BOOL useHalfScreen;
@property (nonatomic) BOOL canForward;
@property (copy, nonatomic) NSString *groupBuyBypassData;
@property (retain, nonatomic) WCFinderPOIParamsModel *poiParamsModel;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned int poiSrcType;
@property (nonatomic) int entryScene;
@property (nonatomic) int cardType;

- (id)initWithPoiParamsModel:(id)a0 commentScene:(int)a1 poiSrcType:(unsigned int)a2 entryScene:(int)a3 cardType:(int)a4 navVC:(id)a5;
- (void).cxx_destruct;

@end
