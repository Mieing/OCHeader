@class NSString;

@interface AWELiveLeftElement : AWELiveBaseElement <AWELivePriorityElementProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)priorityToViewTypeMap:(unsigned long long)a0;

- (void)setAppear:(BOOL)a0;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (void)onRightAreaChange:(double)a0;
- (id)container;
- (BOOL)visible;
- (void)setVisible:(BOOL)a0;
- (unsigned long long)priority;
- (void)loadView;

@end
