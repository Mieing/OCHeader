@class MMUIImageView, MMUILabel, WCFinderHeadImageView, NSString, MMFinderLiveLiveRoleSignView, FinderLiveContact;
@protocol MMFinderLiveGloryTopItemViewDelegate;

@interface MMFinderLiveGloryTopItemView : MMUIView <WCFinderHeadImageViewDelegate>

@property (weak, nonatomic) id<MMFinderLiveGloryTopItemViewDelegate> delegate;
@property (retain, nonatomic) FinderLiveContact *contact;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMUIImageView *headImageBoarderView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *heatCountLabel;
@property (retain, nonatomic) MMUIImageView *roleIconImageView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView;
@property (nonatomic) BOOL alwaysDark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(unsigned long long)a0 alwaysDark:(BOOL)a1 delegate:(id)a2;
- (void)setupSubviews;
- (void)updateHeightAndLayout;
- (void)updateWith:(id)a0;
- (void)checkNeedShowTips;
- (void)showTipsViewIfNeed;
- (void)updateViewContents;
- (void)finderHeadImageViewLoadUrlImageFailed:(id)a0 timeConsume:(long long)a1 errorCode:(long long)a2;
- (void)updateHeadForHideAvator;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void)_internalClickHead;
- (void)handleNameLabelTapGesture;
- (id)emptyAvatorHeadImage;
- (id)hideAvatorHeadImage;
- (double)wechatImageCorner;
- (struct CGSize { double x0; double x1; })headSize:(BOOL)a0;
- (id)boarderImage:(BOOL)a0;
- (void).cxx_destruct;

@end
