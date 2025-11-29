@class CSJNativeAd, UIImageView, CSJVideoAdView, UILabel, CSJDislikeButton, UIViewController;
@protocol CSJVideoAdReportor, CSJDislikeReportorDelegate;

@interface CSJNativeAdRelatedView : NSObject

@property (retain, nonatomic) CSJDislikeButton *dislikeButton;
@property (retain, nonatomic) UILabel *adLabel;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIImageView *logoADImageView;
@property (retain, nonatomic) CSJVideoAdView *videoAdView;
@property (retain, nonatomic) CSJNativeAd *nativeAd;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) id<CSJDislikeReportorDelegate> dislikeReportor;
@property (readonly, nonatomic) id<CSJVideoAdReportor> videoAdReportor;

- (void)refreshData:(id)a0;
- (void)dislikeAction:(id)a0;
- (BOOL)_isVideoAdView;
- (void)tapAdLogo;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)dealloc;

@end
