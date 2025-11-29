@class NSString, NSMutableSet;
@protocol IESIMGroupABValueInterface;

@interface IESIMThreadComponent : AWEIMComponentBase <IESIMThreadInterface, AWEIMMessageListDataAction>

@property (nonatomic) BOOL enableThread;
@property (retain, nonatomic) NSMutableSet *haveTrackThreadMessageSet;
@property (weak, nonatomic) id<IESIMGroupABValueInterface> abValuesService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)willDeleteMessage:(id)a0;
- (BOOL)enableThreadWithMessageViewModel:(id)a0;
- (BOOL)enableThreadWithIESMessage:(id)a0;
- (void)transferToThreadDetailWithMessageViewModel:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (BOOL)canShowAppendixWithMessageViewModel:(id)a0;
- (void)p_binding;
- (void)p_updateBlockState;
- (BOOL)p_enableThreadByParentCon:(id)a0;
- (BOOL)p_enableThreadByParentConOwnerABValue;
- (BOOL)enableThreadWithMessage:(id)a0 iesMessage:(id)a1;
- (id)p_defalutMsgThreadEntranceBlockList;
- (void).cxx_destruct;

@end
