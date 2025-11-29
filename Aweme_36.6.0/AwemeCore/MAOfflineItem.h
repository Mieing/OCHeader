@class NSString;

@interface MAOfflineItem : NSObject <NSCoding>

@property (nonatomic) BOOL markToDelete;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *jianpin;
@property (copy, nonatomic) NSString *pinyin;
@property (copy, nonatomic) NSString *adcode;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) long long size;
@property (nonatomic) long long itemStatus;
@property (nonatomic) long long downloadedSize;

+ (id)itemWithDictionary:(id)a0;

- (void)performInitializationWithDictionary:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)copyTo:(id)a0;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
