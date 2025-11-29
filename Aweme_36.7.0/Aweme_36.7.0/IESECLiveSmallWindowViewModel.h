@class IESECGCDTimer, IESECLiveRoomContext, IESECObservable;
@protocol IESECHTTPRequestTask;

@interface IESECLiveSmallWindowViewModel : NSObject

@property (weak, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) IESECGCDTimer *nextBottomInfoRequestTimer;
@property (weak, nonatomic) id<IESECHTTPRequestTask> bottomInfoRequestTask;
@property (retain, nonatomic) IESECObservable *labelsObservableModel;

- (void)didShowSmallWindow;
- (void)didHideSmallWindow;
- (void)requestBottomInfo;
- (void)trackBottomInformationWithEvent:(id)a0 model:(id)a1 extraParams:(id)a2;
- (void)requestNextIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRoomContext:(id)a0;

@end
