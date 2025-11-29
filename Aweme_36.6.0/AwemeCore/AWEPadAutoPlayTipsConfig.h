@class NSString;

@interface AWEPadAutoPlayTipsConfig : NSObject

@property (nonatomic) long long gapTime;
@property (nonatomic) long long repeatCount;
@property (copy, nonatomic) NSString *tips;

+ (id)defaultCongfigFromSetting;

- (void).cxx_destruct;

@end
