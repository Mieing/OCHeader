@class NSString;

@interface IESIMGroupImpl.CreateOpenGroupPageInfoConfig : MTLModel <MTLJSONSerializing> {
    void /* function */ text1;
    void /* function */ text2;
}

@property (nonatomic, copy) NSString *text1;
@property (nonatomic, copy) NSString *text2;
@property (nonatomic) BOOL hide;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
