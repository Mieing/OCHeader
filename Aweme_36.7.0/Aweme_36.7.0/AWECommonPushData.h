@class NSString, NSDictionary, NSDate, NSNumber;

@interface AWECommonPushData : NSObject

@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *bizline;
@property (nonatomic) long long from;
@property (copy, nonatomic) NSString *action;
@property (readonly, nonatomic) NSDate *pushAt;
@property (readonly, nonatomic) NSDate *receiveAt;
@property (readonly, nonatomic) NSDate *createAt;
@property (nonatomic) double ttl;
@property (retain, nonatomic) NSNumber *configId;
@property (retain, nonatomic) NSDictionary *payloadData;
@property (nonatomic) unsigned long long dataLength;
@property (nonatomic) double pushAtTimestamp;
@property (nonatomic) double createAtTimestamp;
@property (nonatomic) double receiveAtTimestamp;

+ (id)dataWithByteSyncData:(id)a0 error:(id *)a1;

- (id)to_dict;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
