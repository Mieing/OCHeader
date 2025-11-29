@class NSString;

@interface AWEPaySwiftImpl.CCMOpeningPageInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ titleImgURL;
    void /* function */ planID;
}

@property (nonatomic, copy) NSString *titleImgURL;
@property (nonatomic, copy) NSString *planID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
