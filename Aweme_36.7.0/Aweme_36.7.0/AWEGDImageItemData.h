@class AWEGDImageModel, NSString, AWEGDVideoModel, AWEGDRateModel;

@interface AWEGDImageItemData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGDImageModel *image;
@property (retain, nonatomic) AWEGDVideoModel *video;
@property (retain, nonatomic) AWEGDRateModel *rate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
