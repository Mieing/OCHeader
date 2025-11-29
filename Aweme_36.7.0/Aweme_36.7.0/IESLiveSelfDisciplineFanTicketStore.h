@class NSArray, NSString;
@protocol IESLiveSelfDisciplineRouter;

@interface IESLiveSelfDisciplineFanTicketStore : IESLiveBaseFanTicketStore <IESLiveSelfDisciplineLifeCycle>

@property (weak, nonatomic) id<IESLiveSelfDisciplineRouter> disciplineRouter;
@property (copy, nonatomic) NSArray *guestList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selfDisciplineDidStart:(BOOL)a0;
- (void)selfDisciplineDidFinish;
- (void)bizStoreMount;
- (void)bizStoreDidUpdatedGuestList:(id)a0;
- (void)updateFanticket;
- (void).cxx_destruct;

@end
