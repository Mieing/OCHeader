@class NSNumber, NSDictionary, NSString;

@interface VePlayerSettingModel : NSObject

@property (retain, nonatomic) NSNumber *settingsTime;
@property (copy, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSString *ctxInfos;

- (void).cxx_destruct;

@end
