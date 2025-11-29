@class NSString, UIView;

@interface LSIMMessageMenuItem : NSObject <LSIMMessageMenuItemProtocol>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) UIView *actionTarget;
@property (nonatomic) SEL actionSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
