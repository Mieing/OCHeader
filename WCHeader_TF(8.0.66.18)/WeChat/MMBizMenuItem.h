@class NSString, NSArray, NSDictionary;

@interface MMBizMenuItem : NSObject

@property (retain, nonatomic) NSString *menuId;
@property (nonatomic) unsigned int menuType;
@property (nonatomic) unsigned int menuActionType;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSArray *arrSubMenu;
@property (retain, nonatomic) NSString *nativeUrl;
@property (nonatomic) unsigned long long showIconType;
@property (retain, nonatomic) NSDictionary *menuEcsData;

- (id)init;
- (void)parseFromJsonDictionary:(id)a0;
- (void).cxx_destruct;

@end
