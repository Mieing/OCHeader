@class LLDitoGeneralContainerPageContext, NSString, IESLLPOIDetailListCommonUtil, UIViewController;

@interface IESLLPOIDetailListAwemeUtil : NSObject <IESLLPOIDetailListAwemeUtilProtocol>

@property (retain, nonatomic) IESLLPOIDetailListCommonUtil *commonHelper;
@property (copy, nonatomic) NSString *awemeTagName;
@property (weak, nonatomic) UIViewController *detailViewController;
@property (weak, nonatomic) LLDitoGeneralContainerPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (void)recordCellTagWithVM:(id)a0;
- (struct CGSize { double x0; double x1; })biserialAwemeSizeWithVM:(id)a0;
- (struct CGSize { double x0; double x1; })biserialContainerSize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })biserialCellFrameWithVM:(id)a0;
- (void).cxx_destruct;

@end
