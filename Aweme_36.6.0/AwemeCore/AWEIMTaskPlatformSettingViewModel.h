@class NSString;

@interface AWEIMTaskPlatformSettingViewModel : NSObject

@property (copy, nonatomic) NSString *cellIdentifier;
@property (retain, nonatomic) id model;
@property (nonatomic) double cellHeight;

- (id)initWithCellIdentifier:(id)a0 model:(id)a1;
- (void)onSwitchValueChange:(id)a0;
- (void).cxx_destruct;

@end
