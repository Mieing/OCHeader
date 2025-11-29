@class NSString, UIImage;

@interface AWEECOMIMPopMenuItem : NSObject

@property (copy, nonatomic) NSString *menuTitle;
@property (retain, nonatomic) UIImage *menuImage;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *trackName;
@property (nonatomic) long long priority;

+ (id)menuItemsWithTypes:(id)a0;
+ (id)menuItemWithType:(unsigned long long)a0;
+ (id)titleWithTypeMapper;
+ (id)imageNameWithTypeMapper;
+ (id)sortedMenuItemsWithMenuItems:(id)a0;
+ (id)trackNameWithTypeMapper;
+ (id)priorityWithTypeMapper;

- (void).cxx_destruct;

@end
