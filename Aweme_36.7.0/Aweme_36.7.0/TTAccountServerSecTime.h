@class NSString;

@interface TTAccountServerSecTime : TTAccountCommonModel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *logID;
@property (nonatomic) long long serverTimestamp;
@property (copy, nonatomic) NSString *serverSecTime;
@property (nonatomic) long long localTimestamp;
@property (nonatomic) long long internalTimestamp;
@property (nonatomic) BOOL isUpdated;

+ (id)modelPropertyBlacklist;

- (id)initWithServerTimestamp:(long long)a0 serverSecTime:(id)a1 localTimestamp:(long long)a2 internalTimestamp:(long long)a3 logID:(id)a4;
- (void).cxx_destruct;

@end
