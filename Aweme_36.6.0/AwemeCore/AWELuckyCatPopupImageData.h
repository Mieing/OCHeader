@class NSNumber, NSString, AWELuckyCatPopupSpaceModel;

@interface AWELuckyCatPopupImageData : MTLModel <MTLJSONSerializing, AWELuckyCatPopupWidgetUICommonData>

@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *imageUrl;
@property (nonatomic) BOOL enlarge;
@property (retain, nonatomic) AWELuckyCatPopupSpaceModel *space;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spaceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
