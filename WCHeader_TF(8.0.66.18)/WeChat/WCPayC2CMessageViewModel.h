@interface WCPayC2CMessageViewModel : WCPayBaseMessageViewModel

@property (nonatomic) BOOL hasGetFullCoverInfoDetail;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)sourceTitle;
- (id)sourceTag;
- (id)titleText;
- (id)descText;
- (id)redSkinLogoUrl;
- (id)redSkinLogoMd5;
- (double)iconSize;
- (id)iconName;
- (unsigned long long)bubbleType;
- (id)iconUrl;
- (id)additionalAccessibilityDescription;
- (id)redEnvelopeShowResource;
- (id)bubbleWidgetUrl;
- (id)bubbleWidgetMd5;
- (BOOL)isExclusiveHongBaoMsg;
- (id)getExclusiveHbNickname:(id)a0;
- (BOOL)shouldHideBubbleDescLabel;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (struct CGSize { double x0; double x1; })measure:(struct CGSize { double x0; double x1; })a0;
- (id)bubblePagUrl;
- (id)pagWidgateMd5;
- (id)bubbleAtmosphereUrl;
- (void)updateCoverInfoFullContent;

@end
