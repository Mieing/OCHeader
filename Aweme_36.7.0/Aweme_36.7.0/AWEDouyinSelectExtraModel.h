@class NSString;

@interface AWEDouyinSelectExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ugInfoResult;
@property (nonatomic) long long ugInfoParseGid;
@property (copy, nonatomic) NSString *awemeRelationSecId;
@property (copy, nonatomic) NSString *ugInfoParseSeqGid;
@property (copy, nonatomic) NSString *ugInfoRecallGids;
@property (nonatomic) long long loginRefreshMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
