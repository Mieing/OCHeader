@class NSString, UIImageView, UIImage, UIView, SightIconView, MMUILabel;
@protocol WAWebToastViewDelegate;

@interface WAWebToastView : UIView {
    UIView *_bkgView;
    UIImageView *_tipIconView;
    MMUILabel *_label;
    SightIconView *_loadingIndicator;
}

@property (nonatomic) long long seqID;
@property (weak, nonatomic) id<WAWebToastViewDelegate> delegate;
@property (nonatomic) long long dialogId;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) double fShowDuration;
@property (nonatomic) BOOL isMask;

+ (void)setCurrentToastView:(id)a0;
+ (id)getCurrentToastViewIfHave;
+ (long long)genSeqId;
+ (id)addToastInView:(id)a0;
+ (id)showToast:(id)a0 andText:(id)a1 duration:(double)a2 inView:(id)a3;
+ (id)showLoading:(id)a0 duration:(double)a1 inView:(id)a2;
+ (id)tryCreateNewToastInView:(id)a0;
+ (void)hideToast:(id /* block */)a0;
+ (void)removeToast;
+ (void)removeToastInView:(id)a0;
+ (void)adjustPosition:(id)a0;
+ (void)bringToastToFront;

- (id)init;
- (void)layoutSubviews;
- (id)contentDescription;
- (void)build;
- (void)setupLoadingUI:(id)a0;
- (void)adjustToastPosition;
- (void)setupToastUI:(id)a0 image:(id)a1;
- (void)setupTextUI:(id)a0;
- (void)setupHybridUI:(id)a0 image:(id)a1;
- (void)show;
- (void)delayHideWithSeqID:(id)a0;
- (void)hide:(id /* block */)a0 seqID:(long long)a1;
- (void).cxx_destruct;

@end
