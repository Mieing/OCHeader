@class NSString;

@interface AWELVideoMetaBlockInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *blockDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
