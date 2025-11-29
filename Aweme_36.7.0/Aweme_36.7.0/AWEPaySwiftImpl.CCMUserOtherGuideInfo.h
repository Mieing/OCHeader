@class NSString;

@interface AWEPaySwiftImpl.CCMUserOtherGuideInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ mainTitle;
    void /* function */ subTitleDesc;
    void /* function */ mainButton;
}

@property (nonatomic, copy) NSString *mainTitle;
@property (nonatomic, copy) NSString *subTitleDesc;
@property (nonatomic, copy) NSString *mainButton;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
