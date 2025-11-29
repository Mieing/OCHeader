@class NSString, NSArray;

@interface AWEIMMixPhotoStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *describe;
@property (copy, nonatomic) NSString *negativeText;
@property (copy, nonatomic) NSString *positiveText;
@property (copy, nonatomic) NSArray *list;
@property (nonatomic) BOOL showAiModelEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
