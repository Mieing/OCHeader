@class NSString;

@interface BDPSubscribeTmpTrackInfo : NSObject

@property (copy, nonatomic) NSString *msgId;
@property (nonatomic) BOOL authorized;
@property (nonatomic) unsigned long long denyFrom;

+ (id)denyFromStrDesc:(unsigned long long)a0;

- (id)toMap;
- (void).cxx_destruct;

@end
