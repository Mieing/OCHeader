@class NSString, NSArray;

@interface AWEFeedTabJumpItemStorage : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *lastShowTimestamp;
@property (copy, nonatomic) NSArray *triggerRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)triggerRecordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
