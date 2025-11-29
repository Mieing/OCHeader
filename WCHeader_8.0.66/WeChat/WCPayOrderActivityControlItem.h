@class NSString;

@interface WCPayOrderActivityControlItem : MMObject

@property (retain, nonatomic) NSString *activityUrl;
@property (retain, nonatomic) NSString *buttonTitle;
@property (nonatomic) BOOL isButtonEnable;
@property (nonatomic) BOOL isButtonHidden;
@property (nonatomic) BOOL isActivityViewHidden;

- (void).cxx_destruct;

@end
