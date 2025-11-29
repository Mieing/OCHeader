@class NSDictionary, RxScheduler;
@protocol AWEIMGroupChatPanelControllerDelegate;

@interface AWEIMGroupChatPanelControllerAction : NSObject

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSDictionary *associateValue;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> delegate;
@property (retain, nonatomic) RxScheduler *scheduler;

- (id)initWithType:(long long)a0 associateValue:(id)a1 trackDict:(id)a2;
- (void).cxx_destruct;

@end
