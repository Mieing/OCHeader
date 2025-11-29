@class NSString, NSArray;

@interface AWEECOMIMChatListTitleBarIconModel : NSObject

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSString *iconCodeString;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *btmCDID;
@property (copy, nonatomic) NSArray *subTools;
@property (copy, nonatomic) NSString *iconName;

- (id)transformToClickModel;
- (void).cxx_destruct;

@end
