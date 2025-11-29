@class HTSLiveLynxContainer, NSMutableDictionary, HTSLiveMyLiveCarouselItem_CarouselItem, IESLiveProfileUpperArea;

@interface IESLiveMyLiveVisitorEntryViewModel : NSObject

@property (retain, nonatomic) IESLiveProfileUpperArea *metaData;
@property (retain, nonatomic) NSMutableDictionary *itemShownDic;
@property (retain, nonatomic) HTSLiveMyLiveCarouselItem_CarouselItem *currentDisplayItem;
@property (retain, nonatomic) HTSLiveLynxContainer *lynxContainer;

- (id)initWithMetaData:(id)a0 diContext:(id)a1;
- (id)commonParamsForItem:(id)a0;
- (void)trackCurrentItemShow;
- (void)trackClickCurrentItem;
- (void).cxx_destruct;

@end
