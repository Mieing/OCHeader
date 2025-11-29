@class NSString, UIImageView, MMLiveLotteryGiftConfit, MMFinderLiveGiftPacketViewModel, MMUILabel;

@interface MMLiveLotteryGiftView : UIView <MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) MMUILabel *giftCountLabel;
@property (retain, nonatomic) MMFinderLiveGiftPacketViewModel *viewModel;
@property (retain, nonatomic) MMLiveLotteryGiftConfit *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithViewModel:(id)a0 config:(id)a1;
- (void)updateProductCount:(unsigned int)a0;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void).cxx_destruct;

@end
