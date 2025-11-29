@class NSString;

@interface AWEGDImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL bigImageStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
