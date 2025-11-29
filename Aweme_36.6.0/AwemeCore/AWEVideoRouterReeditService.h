@class NSString;

@interface AWEVideoRouterReeditService : NSObject <AWEStudioReeditService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startReeditWithConfig:(id)a0 presetModel:(id)a1;
- (id)startReeditWithAwemeID:(id)a0 shootWay:(id)a1 enterFrom:(id)a2 trackParams:(id)a3;
- (id)p_newStartReeditWithConfig:(id)a0 presetModel:(id)a1;
- (id)p_oldStartReeditWithConfig:(id)a0;
- (void)trackClickEditTitleAgainEventWithConfig:(id)a0 anchorInfo:(id)a1 error:(id)a2;
- (void)forbidCheckAnchorInfoWithModel:(id)a0;

@end
