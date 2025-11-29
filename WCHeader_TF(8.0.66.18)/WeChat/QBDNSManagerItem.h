@class NSArray, NSDate;

@interface QBDNSManagerItem : NSObject

@property (retain) NSArray *records;
@property int status;
@property long long err;
@property (retain) NSDate *badDate;
@property (retain) NSDate *emptyDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
