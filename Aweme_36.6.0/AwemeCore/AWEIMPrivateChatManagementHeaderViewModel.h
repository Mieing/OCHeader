@class NSDictionary, NSString;

@interface AWEIMPrivateChatManagementHeaderViewModel : NSObject

@property (copy, nonatomic) NSDictionary *titleStringDict;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *filterString;
@property (copy, nonatomic) NSString *filterImageIcon;
@property (nonatomic) unsigned long long selectType;
@property (nonatomic) BOOL canShowBubble;
@property (nonatomic) BOOL isFilterTabSelected;

- (void)switchTabWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
