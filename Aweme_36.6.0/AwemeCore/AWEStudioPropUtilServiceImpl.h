@class NSString;

@interface AWEStudioPropUtilServiceImpl : NSObject <AWEStudioPropUtilService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkIsTextOnImageAnchorWithAweme:(id)a0;
- (BOOL)checkIsCaptionFollowShotAnchorWithAweme:(id)a0;
- (id)stickersFromModel:(id)a0 withCurrentIndex:(long long)a1;
- (id)userCountStringByNum:(long long)a0 tailString:(id)a1;
- (id)formatedDurationMS:(unsigned long long)a0;
- (id)textOnImageEffectIDForAwemeModel:(id)a0;
- (BOOL)checkIsTextOnImageWithSticker:(id)a0;
- (BOOL)checkIsCaptionFollowShotWithSticker:(id)a0;
- (id)CaptionFollowShotEffectIDForAwemeModel:(id)a0;
- (id)anchorSubtitleTrackInfoWithAweme:(id)a0;
- (BOOL)enableTemplateAnchorTwoLineStyleWithAweme:(id)a0;
- (id)anchorSubtitleWithAweme:(id)a0;
- (BOOL)enablePropAnchorTwoLineStyleWithAweme:(id)a0;
- (BOOL)checkIsTextOnImageWithEffectExtra:(id)a0;
- (BOOL)checkIsCaptionFollowShotWithEffectExtra:(id)a0;
- (id)combineStrA:(id)a0 strB:(id)a1 withMarkStr:(id)a2;

@end
