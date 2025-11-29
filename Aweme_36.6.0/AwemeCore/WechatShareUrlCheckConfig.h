@class NSString, NSArray;

@interface WechatShareUrlCheckConfig : NSObject

@property (nonatomic) unsigned int state;
@property (copy, nonatomic) NSString *appidInRule;
@property (retain, nonatomic) NSArray *urlRuleList;
@property (nonatomic) unsigned long long userWaitTime;
@property (nonatomic) unsigned long long nextRequestInterval;
@property (retain, nonatomic) NSString *buffer;

- (id)initWithParamDictionary:(id)a0;
- (id)genDictionaryToSave;
- (void).cxx_destruct;

@end
