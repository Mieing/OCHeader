@class NSString, NSURL, NSArray;

@interface AWEMusicStreamingImpl.LunaURLInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ uri;
    void /* function */ urls;
    void /* function */ template;
    void /* function */ templatePrefix;
}

@property (nonatomic, readonly) NSString *templateValue;
@property (nonatomic, readonly) NSString *fullTemplate;
@property (nonatomic, readonly) NSURL *plainURL;
@property (nonatomic, readonly) NSArray *urlArr;
@property (nonatomic, readonly) NSURL *baseUrl;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, copy) NSString *template;
@property (nonatomic, copy) NSString *templatePrefix;
@property (nonatomic) BOOL needCompleteUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (id)fullURLWithSize:(struct CGSize { double x0; double x1; })a0 crop:(id)a1 isGIF:(BOOL)a2 hasAlpha:(BOOL)a3;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
