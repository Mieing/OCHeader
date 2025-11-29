@class NSString, NSArray;

@interface BDFileUploadiOSDNSItemInfo : NSObject

@property (nonatomic) long long usingIndex;
@property (nonatomic) double createTime;
@property (nonatomic) double expiredTime;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSArray *ips;
@property (nonatomic) long long parserType;
@property (nonatomic) long long ttl;
@property (readonly, nonatomic) BOOL hasExpired;

- (id)getIpUsingRR;
- (void).cxx_destruct;
- (id)init;

@end
