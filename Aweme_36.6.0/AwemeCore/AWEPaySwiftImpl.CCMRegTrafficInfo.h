@class NSString;

@interface AWEPaySwiftImpl.CCMRegTrafficInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ trafficId;
    void /* function */ regHintType;
    void /* function */ regGuideText;
}

@property (nonatomic, copy) NSString *trafficId;
@property (nonatomic, copy) NSString *regHintType;
@property (nonatomic, copy) NSString *regGuideText;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
