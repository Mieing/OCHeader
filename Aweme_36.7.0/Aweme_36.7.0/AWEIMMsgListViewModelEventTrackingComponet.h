@class NSString;
@protocol AWEIMMessageListComponentCenter;

@interface AWEIMMsgListViewModelEventTrackingComponet : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListComponent>

@property (copy, nonatomic) NSString *messageVCIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
