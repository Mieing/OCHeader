@class NSNumber, NSArray;

@interface CJPayUpdateSettingsActionModel : NSObject

@property (nonatomic) long long action;
@property (retain, nonatomic) NSNumber *settingsTime;
@property (copy, nonatomic) NSArray *deploys;
@property (nonatomic) BOOL success;

- (id)settingsRecords;
- (void).cxx_destruct;

@end
