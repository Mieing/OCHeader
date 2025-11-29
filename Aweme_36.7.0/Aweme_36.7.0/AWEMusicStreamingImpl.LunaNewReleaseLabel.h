@class NSString;

@interface AWEMusicStreamingImpl.LunaNewReleaseLabel : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ text;
    void /* function */ eventAttr;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *eventAttr;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
