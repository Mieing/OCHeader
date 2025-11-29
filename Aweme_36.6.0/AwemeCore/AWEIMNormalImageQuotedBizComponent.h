@class AWEIMNormalImageMessageViewModel, AWEIMImageMessage, NSString;

@interface AWEIMNormalImageQuotedBizComponent : AWEIMFlexComponent <AWEIMMessageQuoteDataAction>

@property (retain, nonatomic) AWEIMImageMessage *originMessage;
@property (retain, nonatomic) AWEIMNormalImageMessageViewModel *originMessageViewModel;
@property (nonatomic) long long vmState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)p_needResizeImage:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)didLoadFullOriginMessage:(id)a0 messageStatus:(int)a1;
- (void)configMessage;
- (void)reloadImageFromVM;
- (void)p_clipAndShowImage:(id)a0;
- (id)p_clippedImageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 corners:(unsigned long long)a2;
- (void)reloadPresenterWithImage:(id)a0;
- (void).cxx_destruct;

@end
