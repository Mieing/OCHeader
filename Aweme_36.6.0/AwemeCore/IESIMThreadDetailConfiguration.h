@class AWEIMMessageViewModel, AWEIMMessageConversation, NSDictionary;

@interface IESIMThreadDetailConfiguration : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *parentConversation;
@property (retain, nonatomic) AWEIMMessageConversation *threadConversation;
@property (retain, nonatomic) AWEIMMessageViewModel *rootMessageViewModel;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) id /* block */ afterInitialComponentAllResolved;

- (id)componentsNameArray;
- (id)lazyComponentsNameArray;
- (void).cxx_destruct;

@end
