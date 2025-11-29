@class NSDictionary, NSString;

@interface AWENearbyByteSyncMsg : NSObject <NSCoding>

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) id msgData;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) double ts;
@property (nonatomic) long long tsDiff;
@property (nonatomic) double serverSendTimeStamp;
@property (nonatomic) BOOL isFromLocalCache;
@property (nonatomic) BOOL isFromPullMsg;
@property (nonatomic) long long fromSource;
@property (readonly, copy, nonatomic) NSString *fromSourceStr;
@property (nonatomic) long long noticeType;
@property (nonatomic) long long bizType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
