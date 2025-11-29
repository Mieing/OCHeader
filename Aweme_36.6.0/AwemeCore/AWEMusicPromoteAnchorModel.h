@class NSString, AWEAdLinkModel;

@interface AWEMusicPromoteAnchorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *metaSongId;
@property (retain, nonatomic) AWEAdLinkModel *linkModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)linkModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
