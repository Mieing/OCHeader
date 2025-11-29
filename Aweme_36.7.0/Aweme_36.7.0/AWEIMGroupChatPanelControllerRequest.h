@class NSString, NSDictionary;
@protocol AWEIMGroupChatPanelControllerDelegate;

@interface AWEIMGroupChatPanelControllerRequest : NSObject

@property (readonly, nonatomic) long long panelType;
@property (readonly, copy, nonatomic) NSString *createSource;
@property (readonly, copy, nonatomic) NSDictionary *trackDict;
@property (readonly, copy, nonatomic) NSDictionary *bizExtension;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;

- (id)initWithRouterParamDict:(id)a0;
- (id)initWithMethodModel:(id)a0;
- (id)initWithJoinMethodModel:(id)a0;
- (id)requestAction;
- (long long)__actionType;
- (void)__checkRequiredParams;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
