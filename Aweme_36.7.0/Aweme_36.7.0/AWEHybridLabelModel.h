@class NSString, AWEURLModel;

@interface AWEHybridLabelModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColorString;
@property (copy, nonatomic) NSString *backgroundColorString;
@property (retain, nonatomic) AWEURLModel *image;
@property (copy, nonatomic) NSString *imageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
