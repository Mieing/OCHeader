@class NSString;

@interface AWEMusicStreamingImpl.StatusInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ errorDetail;
    void /* function */ logId;
    void /* function */ statusMsg;
    void /* function */ abParam;
}

@property (nonatomic, copy) NSString *errorDetail;
@property (nonatomic, copy) NSString *logId;
@property (nonatomic) long long now;
@property (nonatomic, copy) NSString *statusMsg;
@property (nonatomic, copy) NSString *abParam;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
