@class NSString, HTSEventContext, HTSLiveInteractiveAPI, NSNumber, NSMutableArray;

@interface IESLiveAudienceLinkmicPreApplyAnchorAcceptViewModel : NSObject <IESLiveAudienceLinkmicPreApplyAnchorAcceptViewDataSource, IESLiveAudienceLinkmicPreApplyAnchorAcceptViewDelegate>

@property (retain, nonatomic) HTSLiveInteractiveAPI *api;
@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) long long size;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isSelfAnchor;
- (id)initWithDIContext:(id)a0 eventContext:(id)a1;
- (void)trackShowWithUser:(id)a0;
- (void)audienceInteractivePermitApplicationOfUser:(id)a0 extraInfo:(id)a1;
- (void)fetchPreApplyList;
- (void)permitPreApplyThenStartSocialInteractWithUser:(id)a0;
- (void).cxx_destruct;

@end
