@class NSMutableDictionary;

@interface AWEEcomSearchProfile : NSObject

@property (retain, nonatomic) NSMutableDictionary *tags;

+ (id)profile;

- (void)setTag:(id)a0 value:(long long)a1;
- (void)markTag:(id)a0 mode:(long long)a1;
- (id)timeProfile:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
