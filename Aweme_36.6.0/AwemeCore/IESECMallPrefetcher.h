@class IESForestResponse;

@interface IESECMallPrefetcher : NSObject

@property (retain, nonatomic) IESForestResponse *forestResponse;

- (void)preFetchResourceAsync:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
