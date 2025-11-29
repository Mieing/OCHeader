@class NSTimeZone;

@interface AWETeenAntiAddictionTimeZoneService : NSObject

@property (retain, nonatomic) NSTimeZone *currentTimeZone;
@property (nonatomic) BOOL timeZoneTrusted;
@property (readonly, nonatomic) BOOL hasChinaSimCard;
@property (readonly, nonatomic) BOOL isOverseaIP;
@property (readonly, nonatomic) BOOL isOverseaUser;

- (BOOL)p_hasChinaSimCard;
- (BOOL)p_isChinaCountryCode:(id)a0;
- (void)setIPOversea:(BOOL)a0;
- (void)setHasChinaSimCard:(BOOL)a0;
- (void)setIsOverseaIP:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
