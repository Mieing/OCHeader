@class NSMutableDictionary;
@protocol IESLLGDImageRateStateProtocol;

@interface IESLLGDImageRateDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *responseDatas;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<IESLLGDImageRateStateProtocol> delegate;

+ (id)sharedManager;

- (void)requestRateDataWithBusinessData:(id)a0;
- (void)notifyDelegateReceiveData:(id)a0;
- (void)notifyDelegateLoadingState;
- (void)sendMainRequest:(id)a0;
- (void)notifyDelegateErrorState;
- (void).cxx_destruct;
- (id)init;
- (void)handleError:(id)a0;

@end
