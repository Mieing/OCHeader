@class NSString;

@interface MMKXMLPayRedDot : NSObject

@property (readonly, nonatomic) NSString *reddotId;
@property (readonly, nonatomic) long long expireTime;
@property (readonly, nonatomic) NSString *wording;

+ (id)KXMLPayRedDotWithReddotId:(id)a0 expireTime:(long long)a1 wording:(id)a2;

- (id)initWithReddotId:(id)a0 expireTime:(long long)a1 wording:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
