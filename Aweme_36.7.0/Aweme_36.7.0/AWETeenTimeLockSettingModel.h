@class NSString;

@interface AWETeenTimeLockSettingModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long time;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void).cxx_destruct;

@end
