@class NSString;

@interface ACCEditBeautyEffectAppliedItemModel : NSObject

@property (readonly, copy, nonatomic) NSString *itemId;
@property (readonly, nonatomic) long long value;

- (id)initWithItemId:(id)a0 value:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
