@protocol IESLiveMessageActionCreatorProtocol;

@interface IESLiveMultiRoomPreloadMessagePlugin : IESLiveMultiRoomPreloadBasePlugin

@property (retain, nonatomic) id<IESLiveMessageActionCreatorProtocol> messageActionCreator;

- (void)loadWithContextPlugin:(id)a0;
- (id)getMessageActionCreator:(BOOL)a0;
- (void).cxx_destruct;

@end
