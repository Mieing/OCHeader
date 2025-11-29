@class NSString;

@interface IESLiveIncentiveTaskTouchApiImpl : HTSLiveApi <IESLiveIncentiveTaskTouchAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchInRoomTaskEntranceWithBizExtra:(id)a0 roomModel:(id)a1 callback:(id /* block */)a2;
- (void)fetchInRoomTaskListWithBizExtra:(id)a0 roomModel:(id)a1 callback:(id /* block */)a2;
- (void)fetchInRoomTaskCenterWithBizExtra:(id)a0 roomModel:(id)a1 callback:(id /* block */)a2;

@end
