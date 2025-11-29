@class NSDictionary, IESECLiveCardViewModelV2, IESECLiveCardDataModel;

@interface IESECLiveCardViewConfig : NSObject

@property (retain, nonatomic) IESECLiveCardDataModel *cardModel;
@property (retain, nonatomic) IESECLiveCardViewModelV2 *cardViewModel;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) NSDictionary *featureParams;
@property (retain, nonatomic) NSDictionary *smartOutParams;

- (id)goodsTitle;
- (id)goodsModel;
- (long long)checkCardTitleLines;
- (id)vibeImageURL;
- (id)buyLottieFileName;
- (id)buyLottieFilePath;
- (double)vibeAreaHeight;
- (struct CGSize { double x0; double x1; })dynamicCardSize;
- (id)buyImageURLStrTransparent:(BOOL)a0;
- (id)buyButtonBackgroundURL;
- (BOOL)shouldDoBuyButtonAnimation;
- (id)tagLabelURL;
- (id)secKillText;
- (id)suffixOfImageName;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })cardSize;
- (BOOL)shouldCountDown;

@end
