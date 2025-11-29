@class NSString, NSDictionary, NSDate, BDXPrefetchRequestModel;

@interface BDXPrefetchResult : NSObject <NSCoding>

@property (retain) BDXPrefetchRequestModel *requestOrigin;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) id response;
@property (retain, nonatomic) NSDate *requestBeginDate;
@property (copy, nonatomic) NSString *errorMessage;

- (BOOL)_isExpiredTimestamp;
- (BOOL)_isExpiredMs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isExpired;

@end
