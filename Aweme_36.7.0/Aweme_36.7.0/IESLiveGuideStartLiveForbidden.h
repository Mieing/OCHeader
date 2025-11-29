@class IESLiveGuideForbiddenModel, HTSEventContext, IESLiveGuideModel, IESLiveGuideForbiddenApi;

@interface IESLiveGuideStartLiveForbidden : NSObject

@property (retain, nonatomic) IESLiveGuideForbiddenApi *forbiddenApi;
@property (retain, nonatomic) IESLiveGuideForbiddenModel *forbiddenModel;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;

- (void)handleForbiddenDetail;
- (void)handleForeverForbidden;
- (void)showForbiddenDetail;
- (id)remainDescriptionWithRemainTime:(long long)a0;
- (id)forbiddenDetailURLStringWithLogID:(id)a0;
- (id)attributedContentWithString:(id)a0;
- (id)minutesFromRemainTime:(unsigned long long)a0;
- (id)hoursFromRemainTime:(unsigned long long)a0;
- (id)daysFromRemainTime:(unsigned long long)a0;
- (id)timeStringWithFullString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)handleTemporaryForbidden;
- (id)initWithTrackContext:(id)a0 guideModel:(id)a1;
- (void)handleRoomForbiddenWithFallbackToast:(id)a0;
- (void).cxx_destruct;

@end
