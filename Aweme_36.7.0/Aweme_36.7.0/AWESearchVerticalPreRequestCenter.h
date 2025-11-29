@class BDXThreadSafeDictionary;

@interface AWESearchVerticalPreRequestCenter : NSObject

@property (retain, nonatomic) BDXThreadSafeDictionary *managerMap;

+ (id)shareInstance;

- (id)responseClassNameFromType:(unsigned long long)a0;
- (id)responseCardDataKeyFromType:(unsigned long long)a0;
- (void)cleanPreRequestManagers;
- (id)fetchPreRequestManagerWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
