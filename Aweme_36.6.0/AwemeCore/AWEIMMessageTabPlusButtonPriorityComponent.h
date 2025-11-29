@class NSString;
@protocol AWEIMMessageTabModeInterface;

@interface AWEIMMessageTabPlusButtonPriorityComponent : AWEIMComponentBase <AWEIMMessageTabPlusButtonPriorityInterface>

@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
