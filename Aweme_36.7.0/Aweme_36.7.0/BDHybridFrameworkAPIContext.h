@class NSString;

@interface BDHybridFrameworkAPIContext : BDHybridAPIContext

@property (nonatomic) double outofdateTimestamp;
@property (copy, nonatomic) NSString *pageSessionId;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
