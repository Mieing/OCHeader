@class NSArray, NSString, AWEIMUser;

@interface AWEIMUserLabelTopGreetingMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ avatarTapAction;
@property (copy, nonatomic) id /* block */ profileBtnTapAction;
@property (retain, nonatomic) NSArray *avatarURLList;
@property (copy, nonatomic) NSString *nameLabelStr;
@property (retain, nonatomic) AWEIMUser *peerUser;
@property (nonatomic) BOOL hasAnyLabel;
@property (retain, nonatomic) NSArray *tagModels;

- (void).cxx_destruct;

@end
