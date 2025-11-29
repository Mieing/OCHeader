@interface TIMXCommandIntegrityRange : NSObject <NSCoding>

@property (nonatomic) long long left;
@property (nonatomic) long long right;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
