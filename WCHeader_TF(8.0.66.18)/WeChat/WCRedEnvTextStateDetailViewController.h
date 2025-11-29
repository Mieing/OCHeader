@class UIView, WCRedEnvTextStateInfo, KindaProxy, NSString, PAGView, UIImageView, UIButton, MMUILabel;
@protocol WCRedEnvTextStateDetailViewControllerDelegate;

@interface WCRedEnvTextStateDetailViewController : MMUIViewController <CAAnimationDelegate, PAGViewListener>

@property (weak, nonatomic) id<WCRedEnvTextStateDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) WCRedEnvTextStateInfo *detailInfo;
@property (retain, nonatomic) KindaProxy *kindProxy;
@property (nonatomic) BOOL hasPageFile;
@property (nonatomic) BOOL m_bIsSetWXStatusClick;
@property (retain, nonatomic) UIView *m_coverView;
@property (retain, nonatomic) UIView *m_containerView;
@property (retain, nonatomic) UIImageView *m_pictureBGImgView;
@property (retain, nonatomic) PAGView *m_pagView;
@property (retain, nonatomic) MMUILabel *m_greetingLabel;
@property (retain, nonatomic) MMUILabel *m_amountLabel;
@property (retain, nonatomic) MMUILabel *m_yuanLabel;
@property (retain, nonatomic) UIView *m_setWXStatusView;
@property (retain, nonatomic) UIView *m_exclusiveView;
@property (retain, nonatomic) UIButton *m_cancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDetailInfo:(id)a0 delegate:(id)a1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupData;
- (void)setupView;
- (void)layoutReceiveView;
- (void)layoutContainerView;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (BOOL)isReceiver;
- (BOOL)hasSetWXStatusEntry;
- (BOOL)hasExclusiveView;
- (void)playPagView;
- (void)onCoverTap:(id)a0;
- (void)onCloseClick:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)showReceiveView;
- (void)showAnimation;
- (void)onSetWxStatus;
- (void)dismiss;
- (void)setWxStatus;
- (int)get_hb_width_2022;
- (int)get_hb_height_2022;
- (void).cxx_destruct;

@end
