@class NSString;
@protocol AWEIMMessageListComponentCenter;

@interface IESIMLongPressMessageRecommendEmojiComponent : AWEIMComponentBase <AWEIMMessageListComponent, IESIMMessageListMessageMenuAction>

@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
