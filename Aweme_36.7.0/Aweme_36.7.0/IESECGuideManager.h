@protocol HTSKVStore;

@interface IESECGuideManager : NSObject

@property (class, readonly, nonatomic) id<HTSKVStore> kvStore;
@property (class, nonatomic) BOOL hasShown3DGuide;

+ (void)resetAllGuide;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0;

@end
