@class NSString, UIImage;

@interface AWEDeliveryPopMenuItem : NSObject

@property (copy, nonatomic) NSString *menuTitle;
@property (retain, nonatomic) UIImage *menuImage;
@property (nonatomic) unsigned long long type;

+ (id)menuItemsWithTypes:(id)a0;
+ (id)menuItemWithType:(unsigned long long)a0;
+ (id)titleWithTypeMapper;
+ (id)imageNameWithTypeMapper;

- (void).cxx_destruct;

@end
