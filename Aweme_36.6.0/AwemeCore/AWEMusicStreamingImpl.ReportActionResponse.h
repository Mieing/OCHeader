@class NSString;

@interface AWEMusicStreamingImpl.ReportActionResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ result;
    void /* function */ message;
}

@property (nonatomic, copy) NSString *result;
@property (nonatomic, copy) NSString *message;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
