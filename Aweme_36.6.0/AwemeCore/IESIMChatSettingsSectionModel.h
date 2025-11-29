@class NSString, NSArray;

@interface IESIMChatSettingsSectionModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long showRoles;
@property (copy, nonatomic) NSArray *itemModels;

- (id)initWithTitle:(id)a0 itemModels:(id)a1;
- (void).cxx_destruct;

@end
