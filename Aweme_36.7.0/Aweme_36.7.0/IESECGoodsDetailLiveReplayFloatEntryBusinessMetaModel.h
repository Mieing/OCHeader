@class IESECLinkConfig, NSString;

@interface IESECGoodsDetailLiveReplayFloatEntryBusinessMetaModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLinkConfig *link;
@property (retain, nonatomic) IESECLinkConfig *livingLinkUrl;
@property (copy, nonatomic) NSString *videoID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
