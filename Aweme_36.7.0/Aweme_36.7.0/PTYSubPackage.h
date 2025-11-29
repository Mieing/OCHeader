@class NSString;

@interface PTYSubPackage : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *modelGroup;
@property (nonatomic) unsigned long long engineType;
@property (copy, nonatomic) NSString *originModelPath;
@property (readonly, nonatomic) unsigned long long modelEngineType;
@property (readonly, copy, nonatomic) NSString *extraParams;

- (id)initWithCoreSubPackage:(const void *)a0;
- (void).cxx_destruct;
- (id)initWithModelInfo:(const void *)a0;

@end
