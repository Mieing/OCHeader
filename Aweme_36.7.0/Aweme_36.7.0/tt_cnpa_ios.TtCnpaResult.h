@class NSString, _TtC11tt_cnpa_ios14TtCnpaManifest;

@interface tt_cnpa_ios.TtCnpaResult : NSObject {
    void /* function */ errorDesc;
    void /* function */ rawJsonManifest;
}

@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, readonly) NSString *errorDesc;
@property (nonatomic, readonly) _TtC11tt_cnpa_ios14TtCnpaManifest *resultManifest;
@property (nonatomic, readonly) NSString *rawJsonManifest;

- (id)initWithErrorCode:(long long)a0 errorDesc:(id)a1 resultManifest:(id)a2 rawJsonManifest:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
