@class NSString, AWESettingsMockEnumArray;

@interface AWEABTestMockInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *owner;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *bizLine;
@property (copy, nonatomic) NSString *bizModule;
@property (retain, nonatomic) AWESettingsMockEnumArray *enums;

- (void).cxx_destruct;

@end
