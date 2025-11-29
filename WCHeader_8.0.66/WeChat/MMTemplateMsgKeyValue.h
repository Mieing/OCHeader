@class NSString;

@interface MMTemplateMsgKeyValue : MMObject <PBCoding>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_value;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
