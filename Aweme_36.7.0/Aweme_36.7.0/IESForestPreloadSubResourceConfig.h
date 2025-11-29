@class NSString, NSNumber;

@interface IESForestPreloadSubResourceConfig : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL enableMemory;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long renderType;
@property (retain, nonatomic) NSNumber *cdnExpiredTime;
@property (copy, nonatomic) NSString *processType;

+ (id)configWithDictionary:(id)a0 andResourceType:(id)a1 andRenderType:(unsigned long long)a2;
+ (unsigned long long)resourceTypeWithStringType:(id)a0;

- (long long)resourceScene;
- (void).cxx_destruct;

@end
