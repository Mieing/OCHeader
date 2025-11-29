@class NSString, QBJcePair;

@interface QBJcePropertyInfo : NSObject

@property (nonatomic) long long tag;
@property (nonatomic) BOOL flag;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) QBJcePair *ext;

+ (id)propertyInfo;

- (id)init;
- (long long)compareWithTag:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
