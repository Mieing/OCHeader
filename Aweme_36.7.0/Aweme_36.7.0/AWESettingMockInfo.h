@class NSString, NSArray, AWESettingsMockEnumArray;

@interface AWESettingMockInfo : NSObject

@property (readonly, nonatomic) AWESettingsMockEnumArray *mockEnums;
@property (retain, nonatomic) AWESettingsMockEnumArray *mockEnums;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSArray *owners;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSArray *linesOfBusiness;
@property (copy, nonatomic) NSArray *modules;

- (void)addTestCase:(long long)a0 caseMessage:(id)a1;
- (void)addEnumWithData:(id)a0 description:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
