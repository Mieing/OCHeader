@class NSMutableArray;

@interface BDEnumConfigMockInfo : BDConfigMockInfo

@property (retain, nonatomic) NSMutableArray *testCases;
@property (retain, nonatomic) NSMutableArray *testCaseMessages;

- (void)addTestCase:(long long)a0 caseMessage:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
