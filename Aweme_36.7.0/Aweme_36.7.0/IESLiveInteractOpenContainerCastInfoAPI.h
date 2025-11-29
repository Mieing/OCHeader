@class NSNumber;

@interface IESLiveInteractOpenContainerCastInfoAPI : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;

- (id)initWithRoomID:(id)a0;
- (void)fetchCastInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
