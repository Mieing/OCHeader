@class NSString;

@interface EdgeComputingFieldConfigModel : MMObject <PBCoding, NSCopying>

@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_name;
+ (void)initialize;

@end
