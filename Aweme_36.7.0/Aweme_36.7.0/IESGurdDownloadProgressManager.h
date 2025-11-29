@class NSMutableDictionary;

@interface IESGurdDownloadProgressManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *progressObjectsDictionary;

+ (id)sharedManager;

- (void)observeAccessKey:(id)a0 channel:(id)a1 downloadProgressBlock:(id /* block */)a2;
- (void)removeObserverWithIdentity:(id)a0;
- (id)progressObjectForIdentity:(id)a0;
- (void).cxx_destruct;

@end
