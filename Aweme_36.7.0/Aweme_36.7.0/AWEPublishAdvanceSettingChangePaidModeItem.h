@class NSString;

@interface AWEPublishAdvanceSettingChangePaidModeItem : NSObject

@property (nonatomic) unsigned long long paidMode;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *eventTitle;
@property (nonatomic) BOOL shouldShowEventEntry;
@property (copy, nonatomic) id /* block */ eventAction;
@property (nonatomic, getter=isSelected) BOOL selected;

- (void).cxx_destruct;

@end
