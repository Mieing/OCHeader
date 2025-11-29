@class NSString, NSArray;

@interface AWEElderModeAlertViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *leftBtnText;
@property (copy, nonatomic) NSString *rightBtnText;
@property (retain, nonatomic) NSArray *itemText;
@property (retain, nonatomic) NSArray *itemIcon;

- (void).cxx_destruct;

@end
