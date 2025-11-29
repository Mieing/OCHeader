@interface CSJClogConfigModel : NSObject <NSCoding>

@property (nonatomic) BOOL isOpen;
@property (nonatomic) long long logLevel;
@property (nonatomic) unsigned long long expireDays;
@property (nonatomic) unsigned long long maxSize;
@property (nonatomic) long long privacyLevel;

- (void)setupDataWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
