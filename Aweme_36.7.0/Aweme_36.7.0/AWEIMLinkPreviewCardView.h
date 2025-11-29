@class AWEIMGeneralCardView, AWEIMLinkPreviewDataController, UIImageView, AWEIMAlphaTapGesture, AWEIMMessageViewModel;

@interface AWEIMLinkPreviewCardView : UIView

@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEIMMessageViewModel *viewModel;
@property (retain, nonatomic) AWEIMLinkPreviewDataController *dataController;
@property (weak, nonatomic) AWEIMLinkPreviewDataController *weakDataController;
@property (nonatomic) double titleMaxWidth;
@property (readonly, nonatomic) AWEIMAlphaTapGesture *tapGes;

+ (id)getSubtitleAttributeStringWithString:(id)a0;

- (id)currentDataController;
- (id)textMsg;
- (void)p_initSubviews;
- (void)coverTapped;
- (void)p_requestUrlInfo;
- (void)p_configCardUIWithTitle:(id)a0 imageUrl:(id)a1;
- (id)p_getSubtitleAttributeStringWithSubtitle:(id)a0;
- (void)p_configImageWithUrl:(id)a0 msgId:(id)a1;
- (void)configWithViewModel:(id)a0 dataController:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
