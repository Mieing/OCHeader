@class NSLock, NSMutableDictionary;

@interface MultiPath : NSObject {
    NSMutableDictionary *_mMultiPathInfo;
    NSLock *_mLock;
}

+ (id)sharedInstance;

- (void)sendMultiPathInfoToLiveIO;
- (id)getMultiPathInfo:(id)a0;
- (void)setMultiPathInfo:(id)a0;
- (void)notifyMultiPathChange:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
