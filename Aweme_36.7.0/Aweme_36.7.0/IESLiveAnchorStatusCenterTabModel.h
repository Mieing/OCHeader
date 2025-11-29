@class NSString, UIView;

@interface IESLiveAnchorStatusCenterTabModel : NSObject

@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) long long tabType;
@property (retain, nonatomic) NSString *bizSchemaURL;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ containerDidShow;
@property (copy, nonatomic) id /* block */ containerDidHide;

- (void).cxx_destruct;

@end
