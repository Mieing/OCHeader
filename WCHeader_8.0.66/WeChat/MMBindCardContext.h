@class NSString;

@interface MMBindCardContext : NSObject

@property (readonly, nonatomic) NSString *bindCardUuid;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceType;

+ (id)BindCardContextWithBindCardUuid:(id)a0 deviceName:(id)a1 deviceType:(id)a2;

- (id)initWithBindCardUuid:(id)a0 deviceName:(id)a1 deviceType:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
