@class NSString;

@interface MMKPayMenuRedDotItem : NSObject

@property (readonly, nonatomic) NSString *itemName;
@property (readonly, nonatomic) long long expireTime;
@property (readonly, nonatomic) NSString *wording;

+ (id)KPayMenuRedDotItemWithItemName:(id)a0 expireTime:(long long)a1 wording:(id)a2;

- (id)initWithItemName:(id)a0 expireTime:(long long)a1 wording:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
