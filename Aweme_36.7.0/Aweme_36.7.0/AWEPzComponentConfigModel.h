@class NSMutableDictionary, NSDictionary, NSString, NSSet, NSArray;

@interface AWEPzComponentConfigModel : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *muEventBlockMap;
@property (retain, nonatomic) NSDictionary *eventBlockMap;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSSet *cTags;
@property (retain, nonatomic) id attachment;
@property (nonatomic) BOOL needRecord;
@property (nonatomic) BOOL isPreCheckTask;
@property (nonatomic) BOOL extraVerify;
@property (retain, nonatomic) NSArray *dynamicStrategies;
@property (nonatomic) BOOL forbidRecordWhenNoDBStrategies;
@property (nonatomic) BOOL onlyVerifyRegister;

- (void)registerEvent:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
