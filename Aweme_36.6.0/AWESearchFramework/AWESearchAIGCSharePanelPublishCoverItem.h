@class NSString;

@interface AWESearchAIGCSharePanelPublishCoverItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *quickCoverUrl;
@property (copy, nonatomic) NSString *coverConfID;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *slowCoverUrl;
@property (nonatomic) BOOL isSlowGenerated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
