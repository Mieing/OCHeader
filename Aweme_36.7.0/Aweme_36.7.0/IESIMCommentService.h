@class NSString;

@interface IESIMCommentService : HTSService <IESIMCommentService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commentMediaFeedInteractionTrackParams:(id)a0;
- (id)commentWatermarkImage;
- (BOOL)checkAndShowBindPhoneAlertOnIMWithConfirmBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (id)getRecentlyUsedEmoticonsOfCount:(long long)a0;
- (void)recordCommentMiniEmoticonUsed:(id)a0;
- (BOOL)isSuccessOrSelfSeeWhenPostIM;

@end
