@class NSString;

@interface AWEPaySwiftImpl.TransportPromotionBannerModel : MTLModel <MTLJSONSerializing> {
    void /* function */ bannerImgURL;
    void /* function */ jumpURL;
    void /* function */ themeStr;
}

@property (nonatomic, copy) NSString *bannerImgURL;
@property (nonatomic, copy) NSString *jumpURL;
@property (nonatomic, copy) NSString *themeStr;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
