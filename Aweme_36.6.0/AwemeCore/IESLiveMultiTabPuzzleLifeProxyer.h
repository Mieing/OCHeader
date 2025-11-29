@class NSString, IESLiveMultiTabModel;
@protocol IESMultiTabHybridViewLifecycleProtocol;

@interface IESLiveMultiTabPuzzleLifeProxyer : NSObject <IESHYHybridViewLifecycleProtocol>

@property (weak, nonatomic) id<IESMultiTabHybridViewLifecycleProtocol> delegate;
@property (weak, nonatomic) IESLiveMultiTabModel *tabModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
