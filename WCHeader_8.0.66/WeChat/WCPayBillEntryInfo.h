@class NSString;

@interface WCPayBillEntryInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *entry_word;
@property (retain, nonatomic) NSString *entry_url;

+ (id)GenFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
