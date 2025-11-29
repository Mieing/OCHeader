@class NSString, UIViewController, LLDitoGeneralContainerPageContext;
@protocol IESLLPOIDetailListUtilProtocol;

@interface IESLLPOIDetailListUtilAdapter : NSObject <IESLLPOIDetailListUtilBaseProtocol>

@property (retain, nonatomic) id<IESLLPOIDetailListUtilProtocol> listUtil;
@property (weak, nonatomic) LLDitoGeneralContainerPageContext *context;
@property (weak, nonatomic) UIViewController *detailNGViewController;
@property (nonatomic) BOOL isFromIsolated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createListUtil;
+ (id)listUtilWithContext:(id)a0;

- (void)bindStateAndAction;
- (void)recordCellTagWithVM:(id)a0;
- (void)firstFeedDidFinishWithPOILogParams:(id)a0;
- (BOOL)isHitCOITestAndShowInPoiPage;
- (struct CGSize { double x0; double x1; })biserialContainerSize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })biserialCellFrameWithVM:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
