@class NSString;

@interface AWEECOMIMMsgFootDescConfigItem : NSObject

@property (copy, nonatomic) NSString *modelClassString;
@property (copy, nonatomic) NSString *extType;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *templateType;
@property (copy, nonatomic) NSString *cardEntityType;
@property (copy, nonatomic) NSString *cardSourceScene;
@property (nonatomic) unsigned long long operation;

+ (unsigned long long)operationWithString:(id)a0;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
