@class AWEIMConversationContext, NSString;

@interface AWEIMCombineShareViewController : AWEIMComponentViewController <AWEIMComponentManagerDependency>

@property (retain, nonatomic) AWEIMConversationContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
