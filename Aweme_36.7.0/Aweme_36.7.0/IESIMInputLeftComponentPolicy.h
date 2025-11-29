@class NSString, NSMutableArray;

@interface IESIMInputLeftComponentPolicy : AWEIMComponentBase <IESIMInputLeftComponentPolicyInterface>

@property (retain, nonatomic) NSMutableArray *leftButtons;
@property (nonatomic) BOOL hasLeftAnchor;
@property (nonatomic) BOOL notNeedLeftButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)leftButtonsForShow;
- (void)p_decideLeftButtons;
- (void).cxx_destruct;

@end
