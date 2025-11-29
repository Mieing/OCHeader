@class UIColor, NSString, NSArray, AWEIMUser;

@interface IESIMAICloneItemViewModel : NSObject

@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSArray *avatarUrl;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) UIColor *buttonBGColor;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (retain, nonatomic) AWEIMUser *botUser;

- (void).cxx_destruct;

@end
