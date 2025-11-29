@class NSString;

@interface AWEAwemeOfflineSettingsModel : NSObject

@property (copy, nonatomic) NSString *videoCount;
@property (copy, nonatomic) NSString *spaceCount;
@property (copy, nonatomic) NSString *playTimeCount;
@property (nonatomic) BOOL isChecked;
@property (nonatomic) BOOL isSelected;

+ (id)configWithItemTypeInfoWithIndexPath:(long long)a0;

- (void).cxx_destruct;

@end
