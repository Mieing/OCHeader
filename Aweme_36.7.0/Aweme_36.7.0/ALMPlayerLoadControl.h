@class NSLock, NSString;
@protocol ALMPlayerLoadControlInterface;

@interface ALMPlayerLoadControl : NSObject <TTAVPlayerLoadControlInterface>

@property (retain, nonatomic) id<ALMPlayerLoadControlInterface> loadControl;
@property (retain, nonatomic) NSLock *safeRWLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
