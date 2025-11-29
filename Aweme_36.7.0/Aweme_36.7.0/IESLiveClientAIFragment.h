@class NSMutableArray;
@protocol IESLiveNewAIService, IESLiveClientAIService, IESLiveClientAIInjector;

@interface IESLiveClientAIFragment : IESLiveRoomComponent

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) id<IESLiveClientAIInjector> clientAIInjector;
@property (retain, nonatomic) NSMutableArray *tagArray;
@property (retain, nonatomic) id<IESLiveNewAIService> aiService;

- (void)componentBindService;
- (void)componentCreate;
- (void)updateCurrentRoomV3tag;
- (void).cxx_destruct;
- (void)dealloc;

@end
