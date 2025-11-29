@class NSString, UIImage;

@interface AWEHomePageRemoteCommonImageModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) NSString *lightImageUrl;
@property (retain, nonatomic) NSString *darkImageUrl;
@property (retain, nonatomic) UIImage *lightImage;
@property (retain, nonatomic) UIImage *darkImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isModelValid;

@end
