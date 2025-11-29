@class NSNumber;

@interface IESLiveInteractiveListAPI : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *anchorID;

- (id)initWithRoomID:(id)a0 anchorID:(id)a1;
- (void)getActiveListV2WithSource:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)getActiveListV2WithSource:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
