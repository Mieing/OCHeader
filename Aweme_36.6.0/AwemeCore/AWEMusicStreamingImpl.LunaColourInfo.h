@class NSString, UIColor;

@interface AWEMusicStreamingImpl.LunaColourInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ alpha;
    void /* function */ rgb;
}

@property (nonatomic, copy) NSString *alpha;
@property (nonatomic, copy) NSString *rgb;
@property (nonatomic, readonly) NSString *hexString;
@property (nonatomic, readonly) UIColor *color;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
