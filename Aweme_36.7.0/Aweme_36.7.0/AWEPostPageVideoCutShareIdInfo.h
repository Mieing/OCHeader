@class NSString, NSArray, AWEPostPageVideoCutShareIdInfoEffectInfo;

@interface AWEPostPageVideoCutShareIdInfo : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *shareId;
@property (retain, nonatomic) NSString *anchorTitle;
@property (retain, nonatomic) NSString *noAnchorAttachApps;
@property (retain, nonatomic) NSString *openPlatformKey;
@property (retain, nonatomic) NSArray *hashtags;
@property (retain, nonatomic) AWEPostPageVideoCutShareIdInfoEffectInfo *effectInfo;
@property (retain, nonatomic) NSString *transferTemplateId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jumpConfirmModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
