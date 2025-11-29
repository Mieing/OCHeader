@class NSString;

@interface AWEStorageServiceKVMetaData : NSObject <NSCoding>

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) int useModule;
@property (nonatomic) BOOL backup;
@property (nonatomic) int type;

- (id)initWithDomain:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
