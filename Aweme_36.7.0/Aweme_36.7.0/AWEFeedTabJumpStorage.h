@class NSArray, NSString;

@interface AWEFeedTabJumpStorage : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *showRecords;
@property (copy, nonatomic) NSArray *itemStorages;
@property (copy, nonatomic) NSArray *showRecordsForExit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showRecordsJSONTransformer;
+ (id)itemStoragesJSONTransformer;
+ (id)showRecordsForExitJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
