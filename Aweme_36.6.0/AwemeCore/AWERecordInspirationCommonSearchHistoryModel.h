@class NSString, NSDate;

@interface AWERecordInspirationCommonSearchHistoryModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *queryText;
@property (retain, nonatomic) NSDate *timestamp;

- (id)initWithQueryText:(id)a0 timestamp:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
