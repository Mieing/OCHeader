@class IESLiveGuideForbiddenApi, NSString, IESLiveGuideForbiddenModel;
@protocol IESLiveInternalRouter;

@interface IESLiveGuideForbiddenFragment : IESLiveGuideComponent <IESLiveGuideForbiddenRouter>

@property (retain, nonatomic) IESLiveGuideForbiddenApi *forbiddenApi;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) IESLiveGuideForbiddenModel *forbiddenModel;
@property (nonatomic) BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)handleRoomFobiddenWithFallbackToast:(id)a0;
- (void)handleForbiddenDetail;
- (void)handleForeverForbidden;
- (void)handleTemporaryForbiiden;
- (void)showForbiddenDetail;
- (id)remainDescriptionWithRemainTime:(long long)a0;
- (id)forbiddenDetailURLStringWithLogID:(id)a0;
- (id)attributedContentWithString:(id)a0;
- (id)minutesFromRemainTime:(unsigned long long)a0;
- (id)hoursFromRemainTime:(unsigned long long)a0;
- (id)daysFromRemainTime:(unsigned long long)a0;
- (id)timeStringWithFullString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
