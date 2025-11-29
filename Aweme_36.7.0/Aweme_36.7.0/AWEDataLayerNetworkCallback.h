@class AWEDataLayerFetchDataToken;

@interface AWEDataLayerNetworkCallback : NSObject

@property (retain, nonatomic) AWEDataLayerFetchDataToken *token;
@property (copy, nonatomic) id /* block */ completion;

+ (id)callbackWithToken:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;

@end
