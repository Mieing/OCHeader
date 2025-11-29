@class NSString, AWEURLModel;

@interface AWEPOIFeedUgcContentHighQualityTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *highQualityTagId;
@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
