@class NSDictionary, NSLock;

@interface AWEIMPushSceneRegistry : NSObject

@property (retain, nonatomic) NSDictionary *innerSceneCheckBlocks;
@property (retain, nonatomic) NSLock *innerLock;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)sceneCheckBlocks;
- (void)p_registerSceneMap;
- (void)registerSceneMap:(id /* block */)a0 forSceneType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
