@class NSString;

@interface EdgeComputingFieldDataModel : MMObject <PBCoding, NSCopying>

@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) int intValue;
@property (nonatomic) long long longValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_intValue;
+ (void)PBArrayAdd_longValue;
+ (void)PBArrayAdd_stringValue;
+ (void)initialize;

@end
