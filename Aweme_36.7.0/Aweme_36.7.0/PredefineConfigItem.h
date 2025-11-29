@class NSString, NSDictionary;

@interface PredefineConfigItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *matchRule;
@property (retain, nonatomic) NSDictionary *requiredDependencies;
@property (retain, nonatomic) NSDictionary *filePath;
@property (retain, nonatomic) NSDictionary *size;
@property (retain, nonatomic) NSDictionary *gzipSize;
@property (retain, nonatomic) NSDictionary *signature;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
