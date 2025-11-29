@class NSString;

@interface AWEFantaInteractionModel : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSString *playInteractionName;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *referString;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
