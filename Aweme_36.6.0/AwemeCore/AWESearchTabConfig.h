@class NSString;

@interface AWESearchTabConfig : NSObject

@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *tabViewName;
@property (copy, nonatomic) NSString *tabKey;
@property (nonatomic) unsigned long long tabType;

+ (BOOL)enableSearchTabConfigOpt;
+ (unsigned long long)tabTypeWithTabKey:(id)a0;
+ (id)tabKeyWithTabType:(unsigned long long)a0;
+ (unsigned long long)searchTabTypeWithString:(id)a0;

- (id)searchTabMultiLanguageName:(id)a0;
- (void).cxx_destruct;

@end
