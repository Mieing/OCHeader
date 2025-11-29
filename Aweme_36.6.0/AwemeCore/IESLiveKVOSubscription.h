@class NSString, NSObject;

@interface IESLiveKVOSubscription : NSObject <IESLiveSubscription>

@property (weak, nonatomic) NSObject *weaktarget;
@property (readonly, nonatomic) NSObject *unsafeTarget;
@property (readonly, weak, nonatomic) NSObject *observer;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) id /* block */ callback;
@property (getter=isDisposed) BOOL disposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
