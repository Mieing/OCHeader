@class NSLock, NSString;

@interface IESIMLaunchUpSdkLoginObserver : NSObject <IESIMLoginManagerMessage>

@property (readonly, nonatomic) NSLock *lock;
@property (nonatomic) BOOL hasCalled;
@property (readonly, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (id)initWithCallback:(id /* block */)a0 timeOut:(unsigned long long)a1;
- (void)p_markResult:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
