@class NSString, AWEBatManEntranceInfo;

@interface AWEBatManInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEBatManEntranceInfo *entranceInfo;
@property (copy, nonatomic) NSString *batManID;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entranceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
