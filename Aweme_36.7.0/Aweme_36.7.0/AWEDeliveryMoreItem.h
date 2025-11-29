@class NSString;

@interface AWEDeliveryMoreItem : NSObject

@property (nonatomic) unsigned long long operateType;
@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) NSString *itemIconURL;
@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *iconCodeString;
@property (copy, nonatomic) NSString *displayType;
@property (copy, nonatomic) NSString *localIconName;

- (id)moreItemRemindDisplayKey;
- (void).cxx_destruct;

@end
