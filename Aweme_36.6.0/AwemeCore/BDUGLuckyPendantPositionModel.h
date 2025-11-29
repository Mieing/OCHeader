@interface BDUGLuckyPendantPositionModel : BDUGLuckyJSONModel

@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (nonatomic) double left;
@property (nonatomic) double right;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
