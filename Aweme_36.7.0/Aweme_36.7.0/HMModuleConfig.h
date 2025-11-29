@class NSString;

@interface HMModuleConfig : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *forwardUrl;
@property (nonatomic) BOOL enableEncrypt;
@property (nonatomic) unsigned long long maxStoreSize;
@property (nonatomic) unsigned long long maxLocalStoreSize;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
