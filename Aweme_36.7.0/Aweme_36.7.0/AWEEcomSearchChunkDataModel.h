@class NSString, NSDictionary;

@interface AWEEcomSearchChunkDataModel : NSObject

@property (copy, nonatomic) NSString *chunkId;
@property (nonatomic) unsigned long long searchType;
@property (nonatomic) unsigned long long chunkType;
@property (copy, nonatomic) NSString *chunkName;
@property (copy, nonatomic) NSString *chunkSubType;
@property (copy, nonatomic) NSDictionary *payload;
@property (nonatomic) double timestamp;
@property (nonatomic) long long status;

- (void)mappingPropertiesWithPayload:(id)a0;
- (id)chunkInfoWithPayload:(id)a0;
- (unsigned long long)chunkTypeWithName:(id)a0;
- (id)initWithSearchType:(unsigned long long)a0 payload:(id)a1;
- (void).cxx_destruct;
- (void)markAsProcessed;

@end
