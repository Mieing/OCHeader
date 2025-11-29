@class NSString;

@interface IESLivePrivilegeEntranceAPIImpl : NSObject <IESLivePrivilegeEntranceBarAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorPrivilegeGrowthWithDuration:(double)a0 error:(id)a1;
- (void)monitorPayGradeWithDuration:(double)a0 error:(id)a1;
- (void)monitorPrivilegeEntranceTouchPositioWithMetaID:(id)a0 duration:(double)a1 error:(id)a2;
- (void)fetchPrivilegeEntranceBarInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)uploadTouchPositionAckWithAnchorID:(id)a0 roomID:(id)a1 metaID:(id)a2;
- (void)fetchPayGradeWithRoomId:(id)a0 completion:(id /* block */)a1;

@end
