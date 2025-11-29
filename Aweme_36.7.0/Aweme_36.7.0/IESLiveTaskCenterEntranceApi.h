@class NSNumber;

@interface IESLiveTaskCenterEntranceApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *anchorID;

- (id)initWithRoomID:(id)a0 anchorID:(id)a1;
- (void)fetchInRoomTaskCenterEntranceWithBizExtra:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
