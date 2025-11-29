@class NSString;

@interface AWEShareIMRefactoringBridgeService : HTSService <AWEShareIMRefactoringBridgeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)simpleShareItemDoubleAvatarOuterWidth;
- (double)simpleShareItemDoubleAvatarSingleWidth;
- (double)simpleShareItemSubtitleFontSize;
- (double)simpleShareListItemWidth;
- (double)simpleShareMainTitleFontSize;
- (double)simpleShareItemTitleFontSize;
- (double)simpleShareListIconWH;
- (double)simpleShareListItemHigherHeight;
- (double)simpleShareItemSmallIconWH;
- (double)simpleShareChannelListContentTopOffset;
- (double)simpleShareChannelListHeight;
- (double)simpleShareListItemHeight;
- (double)simpleShareIMListHeight;
- (double)simpleShareScale;
- (double)simpleShareIMListContentTopOffset;
- (double)simpleShareListItemLineSpace;
- (double)simpleShareInputViewHeight;
- (double)simpleShareInputViewBottomOffset;
- (double)simpleShareInputViewCoverImageTop;
- (double)simpleShareInputViewCoverImageWH;
- (double)simpleShareInputViewButtonFontSize;
- (double)simpleShareInputBottonBottomOffset;
- (id)generateAddWechatFriendsChannel;
- (void)trackMiniSharePlatfromIconWithContext:(id)a0 sharePlatform:(id)a1;
- (void)trackShareDetailWithContext:(id)a0 sharePlatform:(id)a1;
- (void)trackShareVideoWithContext:(id)a0 shareModel:(id)a1 extraParams:(id)a2;
- (void)trackAdShareEventWithContext:(id)a0;
- (void)trackLiveSharePanelHeadClickWithContext:(id)a0 shareModel:(id)a1 extraParams:(id)a2;
- (double)simpleShareInputViewButtonImageSize;
- (double)simpleShareInputViewTextFontSize;
- (id)generateDoubleAvatarView;

@end
