@class NSString;

@interface AWEIMGroupExchangeBatchInfo : NSObject

@property (copy, nonatomic) NSString *batchOwnerID;
@property (copy, nonatomic) NSString *batchID;
@property (copy, nonatomic) NSString *clientBatchID;
@property (nonatomic) long long version;
@property (nonatomic) long long batchEnterCount;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double updateTime;

- (id)getContentDict;
- (id)initWithExtDictionary:(id)a0;
- (id)getExtContentDict;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
