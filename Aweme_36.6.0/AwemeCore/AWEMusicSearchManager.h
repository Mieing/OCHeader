@interface AWEMusicSearchManager : NSObject

+ (id)sharedInstance;

- (id)search:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
