@class NSString, NSDictionary, IESLivePhotoImageXUploadRequestParams, UIView;
@protocol IESLiveHybridContainerProtocol;

@interface IESLiveGuideAnchorTicketEditDetailStore : NSObject

@property (copy, nonatomic) NSDictionary *uploadJSBParams;
@property (copy, nonatomic) NSString *editContentString;
@property (copy, nonatomic) NSString *imageURLPrefixString;
@property (copy, nonatomic) id /* block */ doneEdit;
@property (weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *hybridContainer;
@property (retain, nonatomic) IESLivePhotoImageXUploadRequestParams *imageXParams;
@property (nonatomic) long long pageHeight;
@property (nonatomic, getter=isHalfPannel) BOOL halfPannel;
@property (readonly, nonatomic, getter=isAddImageDirectly) BOOL addImageDirectly;

- (id)generateAttributedString:(double)a0;
- (void)addImage:(id /* block */)a0 imageMaxWidth:(double)a1;
- (void)completedEdit:(id)a0;
- (id)handleEditContentString:(id)a0 imageMaxWidth:(double)a1;
- (id)createImageAttributedString:(id)a0 uploadImage:(id)a1 imageMaxWidth:(double)a2 isNeedURLPrefix:(BOOL)a3;
- (id)createEditContentHtml:(id)a0;
- (struct CGSize { double x0; double x1; })attactmentImageSize:(struct CGSize { double x0; double x1; })a0 imageMaxWidth:(double)a1;
- (id)searchSrcInImgTag:(id)a0 pattern:(id)a1;
- (id)initWithUploadJSBParams:(id)a0 editContent:(id)a1 addimageDirectly:(BOOL)a2 imageURLPrefix:(id)a3 hybridContainer:(id)a4 imageXParams:(id)a5 doneEdit:(id /* block */)a6;
- (void)configPannelHeight:(id)a0;
- (void).cxx_destruct;
- (id)contentAttributes;

@end
