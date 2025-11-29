@class NSDictionary, _TtC21AWEMusicStreamingImpl10StatusInfo;

@interface AWEMusicStreamingImpl.LunaBaseApiResponseModel : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ jsonResponse;
}

@property (nonatomic) long long statusCode;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl10StatusInfo *statusInfo;
@property (nonatomic, copy) NSDictionary *jsonResponse;

+ (id)statusInfoJSONTransformer;

- (BOOL)isBizSuccess;
- (BOOL)isSilenceRisk;
- (BOOL)isRejectRisk;
- (id)bizError;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
