@class MMKSize, MMKPoint;

@interface MMKRect : NSObject

@property (readonly, nonatomic) MMKPoint *origin;
@property (readonly, nonatomic) MMKSize *size;

+ (id)KRectWithOrigin:(id)a0 size:(id)a1;

- (id)initWithOrigin:(id)a0 size:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
