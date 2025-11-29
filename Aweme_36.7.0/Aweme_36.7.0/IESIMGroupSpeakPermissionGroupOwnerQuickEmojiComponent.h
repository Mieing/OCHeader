@class NSString;
@protocol IESIMGroupABValueInterface;

@interface IESIMGroupSpeakPermissionGroupOwnerQuickEmojiComponent : AWEIMComponentBase <IESIMGroupSpeakPermissionGroupOwnerQuickEmojoInterface>

@property (weak, nonatomic) id<IESIMGroupABValueInterface> abValuesService;
@property (nonatomic) BOOL muteFastEmojiAbtest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;

@end
