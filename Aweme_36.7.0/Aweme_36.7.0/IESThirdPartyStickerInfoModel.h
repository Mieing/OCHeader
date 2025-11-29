@class NSString;

@interface IESThirdPartyStickerInfoModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *width;
@property (readonly, copy, nonatomic) NSString *height;
@property (readonly, copy, nonatomic) NSString *size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
