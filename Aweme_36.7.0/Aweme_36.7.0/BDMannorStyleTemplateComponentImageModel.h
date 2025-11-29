@class NSString, NSArray;

@interface BDMannorStyleTemplateComponentImageModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double height;
@property (nonatomic) double width;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *urlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
