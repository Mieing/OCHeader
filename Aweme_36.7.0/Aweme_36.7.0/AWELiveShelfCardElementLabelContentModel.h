@class AWELiveShelfElementTextModel, AWELiveShelfElementMediaModel, NSString;

@interface AWELiveShelfCardElementLabelContentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiveShelfElementTextModel *text;
@property (retain, nonatomic) AWELiveShelfElementMediaModel *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
