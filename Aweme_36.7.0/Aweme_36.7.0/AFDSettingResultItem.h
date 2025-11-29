@class NSArray, AFDSettingItem, NSString;

@interface AFDSettingResultItem : NSObject

@property (copy, nonatomic) NSArray *parentItems;
@property (retain, nonatomic) AFDSettingItem *rootItem;
@property (retain, nonatomic) AFDSettingItem *settingItem;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSArray *pathItems;
@property (readonly, nonatomic) AFDSettingItem *parentItem;

- (void).cxx_destruct;

@end
