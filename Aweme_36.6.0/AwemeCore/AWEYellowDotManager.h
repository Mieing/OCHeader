@class NSMapTable, NSDictionary, NSString, NSLock;

@interface AWEYellowDotManager : NSObject <AWEYellowDotManagerProtocol>

@property (retain, nonatomic) NSDictionary *dotChangeRequestDict;
@property (retain, nonatomic) NSMapTable *componentDelegateTable;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerComponentType:(id)a0 conditionCallbackDelegate:(id)a1;
- (void)changeComponent:(id)a0 requestBy:(unsigned long long)a1 action:(unsigned long long)a2;
- (BOOL)isCompont:(id)a0 yellowDotShowRequestBy:(unsigned long long)a1;
- (BOOL)isCompontYellowDotShow:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
