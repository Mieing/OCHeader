@class NSString;

@interface AWERelatedVideoTrackService : NSObject <AWELandscapeRVTrackServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackRelatedLongVideoPayment:(id)a0 response:(id)a1 error:(id)a2 otherParams:(id)a3;
+ (void)trackRelatedLongVideoPlay:(id)a0 awemeModel:(id)a1 otherParams:(id)a2;
+ (void)trackRelatedLongVideoPayment:(id)a0 status:(long long)a1 params:(id)a2;
+ (id)errorDescMapWithErrorCode:(long long)a0;
+ (void)trackRelatedLongVideoUnpaidEvent:(id)a0 model:(id)a1 commonParams:(id)a2 introTypeStr:(id)a3;
+ (void)setModuleStr:(id)a0;
+ (id)moduleString;


@end
