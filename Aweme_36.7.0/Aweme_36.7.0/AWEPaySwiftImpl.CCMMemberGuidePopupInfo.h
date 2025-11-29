@class NSString;

@interface AWEPaySwiftImpl.CCMMemberGuidePopupInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ mainText;
    void /* function */ leftText;
    void /* function */ rightText;
}

@property (nonatomic) BOOL isShowPopup;
@property (nonatomic, copy) NSString *mainText;
@property (nonatomic, copy) NSString *leftText;
@property (nonatomic, copy) NSString *rightText;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
