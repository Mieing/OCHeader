@class NSString, NSDictionary, NSArray;

@interface IESIMChatSettingsItemModel : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long typeRawValue;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *ext;
@property (weak, nonatomic) IESIMChatSettingsItemModel *parentItem;
@property (retain, nonatomic) NSArray *subItems;
@property (nonatomic) long long subItemsShowType;
@property (copy, nonatomic) NSString *describe;
@property (nonatomic) unsigned long long showRoles;
@property (nonatomic) unsigned long long editRoles;
@property (nonatomic) long long sectionID;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
