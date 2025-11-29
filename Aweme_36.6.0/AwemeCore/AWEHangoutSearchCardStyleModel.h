@class NSString;

@interface AWEHangoutSearchCardStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemBgColor;
@property (copy, nonatomic) NSString *bgStartColor;
@property (copy, nonatomic) NSString *bgEndColor;
@property (copy, nonatomic) NSString *titleImageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
