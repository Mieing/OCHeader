@class NSArray, NSString;

@interface ACCEditTagsURLModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSArray *urlList;
@property (readonly, nonatomic) double imageWidth;
@property (readonly, nonatomic) double imageHeight;
@property (readonly, nonatomic) NSString *URI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
