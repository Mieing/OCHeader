@class NSString;

@interface BDASplashTrackURLModel : NSObject

@property (copy, nonatomic) NSString *adId;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *trackLabel;
@property (readonly, nonatomic) double expireTime;

- (id)initWithAdId:(id)a0 logExtra:(id)a1 trackLabel:(id)a2 expireTime:(double)a3;
- (void).cxx_destruct;

@end
