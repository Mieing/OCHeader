@class NSString, NSArray;

@interface HMDDyldBinaryImage : HMDDyldImageModel

@property (copy, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) unsigned long long base;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *arch;
@property (nonatomic) BOOL load;
@property (nonatomic) BOOL isEnvAbnormal;
@property (nonatomic) BOOL isMain;

+ (id)loadImageFile:(id)a0 error:(id *)a1;
+ (id)objectWithDictionary:(id)a0;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
