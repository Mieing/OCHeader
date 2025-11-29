@class NSString;

@interface AWESearchAnchorIconInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *arrowUri;
@property (copy, nonatomic) NSString *width;
@property (copy, nonatomic) NSString *height;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
