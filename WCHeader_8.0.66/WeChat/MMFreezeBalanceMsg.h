@class NSString;

@interface MMFreezeBalanceMsg : NSObject

@property (readonly, nonatomic) NSString *wording;
@property (readonly, nonatomic) long long wordingColor;
@property (readonly, nonatomic) int wordingSize;
@property (readonly, nonatomic) long long bgColor;
@property (readonly, nonatomic) NSString *routeUrl;
@property (readonly, nonatomic) NSString *leftIcon;
@property (readonly, nonatomic) NSString *rightIcon;

+ (id)FreezeBalanceMsgWithWording:(id)a0 wordingColor:(long long)a1 wordingSize:(int)a2 bgColor:(long long)a3 routeUrl:(id)a4 leftIcon:(id)a5 rightIcon:(id)a6;

- (id)initWithWording:(id)a0 wordingColor:(long long)a1 wordingSize:(int)a2 bgColor:(long long)a3 routeUrl:(id)a4 leftIcon:(id)a5 rightIcon:(id)a6;
- (id)description;
- (void).cxx_destruct;

@end
