@class NSDictionary, NSMutableDictionary;
@protocol AWEGDImageRateStateProtocol;

@interface AWEGDImageRateDataManager : NSObject

@property (copy, nonatomic) NSDictionary *responseData;
@property (retain, nonatomic) NSMutableDictionary *responseDatas;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<AWEGDImageRateStateProtocol> delegate;

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
