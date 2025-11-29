@class NSString, AWEIMMixImageMessage, AWEIMMixImageMessageViewModel;

@interface AWEIMMixImageQuotedBizComponent : AWEIMFlexComponent <AWEIMMessageQuoteDataAction>

@property (retain, nonatomic) AWEIMMixImageMessageViewModel *specializedViewModel;
@property (retain, nonatomic) AWEIMMixImageMessage *originMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)reloadImage;
- (void)p_updateImage:(id)a0;
- (BOOL)p_needResizeImage:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)didLoadFullOriginMessage:(id)a0 messageStatus:(int)a1;
- (void)p_clipAndShowImage:(id)a0;
- (id)p_clippedImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 corners:(unsigned long long)a2;
- (id)p_defaultErrorImage;
- (void)p_updateQuotedContentPropsDelayCoverHide:(BOOL)a0;
- (void)p_bindQuotedMessageVM;
- (void).cxx_destruct;

@end
