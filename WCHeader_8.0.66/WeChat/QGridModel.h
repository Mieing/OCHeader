@class NSString;

@interface QGridModel : NSObject

@property (readonly, nonatomic) int x;
@property (readonly, nonatomic) int y;
@property (readonly, nonatomic) unsigned int scale;
@property (readonly, nonatomic) NSString *gridID;

+ (int)gridUnitAtScale:(int)a0;

- (id)initWithScael:(unsigned int)a0 x:(int)a1 y:(int)a2;
- (id)createChildren;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
