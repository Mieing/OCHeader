@class MsgFastBrowseView, NSString, NSMutableArray, ChatBotThreeColumnImageBrowseView;

@interface ChatBotImageBrowseView : UIView <MsgFastBrowseViewDelegate, FavFullScreenImageViewControllerDelegate, ChatBotThreeColumnImageBrowseViewDelegate>

@property (nonatomic) unsigned int browseStyle;
@property (retain, nonatomic) MsgFastBrowseView *msgFastBrowseView;
@property (retain, nonatomic) ChatBotThreeColumnImageBrowseView *threeColumnView;
@property (retain, nonatomic) NSMutableArray *imageInfos;
@property (copy, nonatomic) id /* block */ imgInfoLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 browseStyle:(unsigned int)a1 imageInfoLoader:(id /* block */)a2;
- (void)layoutSubviews;
- (void)layoutContentView;
- (id)messageWrapsForMsgFastBrowseView:(id)a0;
- (double)getVisibleHeight;
- (double)getContentViewY;
- (void)imageClick:(id)a0 index:(long long)a1;
- (void)onSquareImgClicked:(id)a0 withInfo:(id)a1 withOffset:(unsigned int)a2;
- (id)getOriginImageViewWithSimpleImgInfo:(id)a0;
- (BOOL)allowAnimationOnLandscape;
- (void)fullScreenImage:(id)a0 index:(long long)a1;
- (void).cxx_destruct;

@end
