@class NSString;

@interface BDUGLuckyDogUrlReplaceManager : NSObject <BDUGLuckyDogUrlReplaceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (id)tryReplaceUrlWithOriginalUrl:(id)a0 timing:(unsigned long long)a1;
- (id)tryReplaceUrl:(id)a0 timing:(unsigned long long)a1 hasReplaced:(BOOL *)a2;
- (BOOL)shouldReplaceWithTiming:(unsigned long long)a0 type:(id)a1;

@end
