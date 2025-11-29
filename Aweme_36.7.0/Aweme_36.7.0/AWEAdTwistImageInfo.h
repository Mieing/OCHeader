@class NSString, AWEURLModel;

@interface AWEAdTwistImageInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *coverImageURL;
@property (retain, nonatomic) AWEURLModel *guideImageURL;
@property (retain, nonatomic) AWEURLModel *progressImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
