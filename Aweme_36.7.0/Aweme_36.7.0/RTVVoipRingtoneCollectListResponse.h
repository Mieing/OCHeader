@class NSArray, NSNumber, NSString;

@interface RTVVoipRingtoneCollectListResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *mcList;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *cursorNew;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hasMoreJSONTransformer;
+ (id)mcListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
