@interface MATracePoint : NSObject <NSCoding>

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
