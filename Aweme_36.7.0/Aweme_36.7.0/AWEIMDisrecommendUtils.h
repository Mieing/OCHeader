@class DUXPopover, AWEPopoverActionSheet;

@interface AWEIMDisrecommendUtils : NSObject

@property (weak, nonatomic) AWEPopoverActionSheet *popover;
@property (weak, nonatomic) DUXPopover *duxPopover;

+ (BOOL)isInDisRecommendListWithShareModel:(id)a0;
+ (id)getCollectionViewLocationCellWith:(id)a0 gesRecognizer:(id)a1;
+ (void)addDisrecommendWithShareModel:(id)a0;
+ (id)getDisrecommendTitleString;
+ (void)p_traceDisrecommendPanelConfirmWithShareModel:(id)a0 enterFrom:(id)a1;
+ (id)getDisRecommendDic;
+ (void)p_traceCancelWithShareModel:(id)a0 enterFrom:(id)a1;
+ (void)p_traceMenuShowWithShareModel:(id)a0 isDisrecommend:(BOOL)a1 enterFrom:(id)a2;
+ (void)p_traceMenuDisrecommendWithShareModel:(id)a0 enterFrom:(id)a1;
+ (void)removeDisrecommendWithShareModel:(id)a0;
+ (void)disrecommendHerPostWithShareModel:(id)a0 enterFrom:(id)a1 complete:(id /* block */)a2;
+ (void)getDisrecommendShareModelWithCompletion:(id /* block */)a0;
+ (void)p_showPopoverWithTargetView:(id)a0;
+ (id)getRecoverRecommendTitleString;
+ (BOOL)isPopoverReplaceABTestOn;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
