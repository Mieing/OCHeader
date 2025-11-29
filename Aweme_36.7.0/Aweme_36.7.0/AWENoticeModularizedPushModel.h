@class NSDictionary, NSString;

@interface AWENoticeModularizedPushModel : NSObject

@property (retain, nonatomic) NSDictionary *normalMobParams;
@property (nonatomic) BOOL enableModularizedLightInteraction;
@property (nonatomic) unsigned long long modularizedType;
@property (copy, nonatomic) NSString *lightInteractionSource;
@property (copy, nonatomic) NSString *modularizedTrackPushType;

+ (id)initWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
