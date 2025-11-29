@class NSString, MMUILabel, MMWebImageView;

@interface WCLiveGameRankHalfScreenView : WCLiveHalfScreenView

@property (retain, nonatomic) MMWebImageView *webImageView;
@property (retain, nonatomic) MMUILabel *footerLabel;
@property (retain, nonatomic) NSString *url;
@property (copy, nonatomic) id /* block */ jumpCallback;

- (id)initWithDesc:(id)a0 imageUrl:(id)a1;
- (void)layoutUI;
- (void)onJumpButtonClicked;
- (void).cxx_destruct;

@end
