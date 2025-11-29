@class NSString, UIImage, NSMutableArray;

@interface DiscoverEntranceSettingConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSMutableArray *switchInfos;
@property (retain, nonatomic) NSMutableArray *extSwitchInfos;

- (void).cxx_destruct;

@end
