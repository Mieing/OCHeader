@class NSString;

@interface IESLiveAioLinkStorageImpl : NSObject <IESLiveAioLinkStorage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setString:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)stringForKey:(id)a0;

@end
