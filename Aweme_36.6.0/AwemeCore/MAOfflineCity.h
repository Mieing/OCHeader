@class NSString;

@interface MAOfflineCity : MAOfflineItem <NSCoding>

@property (copy, nonatomic) NSString *cityCode;

- (void)executeInitializationWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)copyTo:(id)a0;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
