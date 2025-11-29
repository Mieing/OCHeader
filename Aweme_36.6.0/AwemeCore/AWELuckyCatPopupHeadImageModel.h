@class NSNumber, NSString;

@interface AWELuckyCatPopupHeadImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *position;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
