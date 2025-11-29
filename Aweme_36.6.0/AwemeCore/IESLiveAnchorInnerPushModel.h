@class NSString;

@interface IESLiveAnchorInnerPushModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long leftViewType;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) long long rightActionType;
@property (copy, nonatomic) NSString *rightActionTitle;
@property (copy, nonatomic) id /* block */ onTapped;

- (void).cxx_destruct;

@end
