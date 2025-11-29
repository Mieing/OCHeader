@class NSArray;

@interface WCPayFetchQAInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *label;

+ (id)GenFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
