@class NSString;

@interface TextStateExperimentEntry : NSObject <PBCoding>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_value;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithItem:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
