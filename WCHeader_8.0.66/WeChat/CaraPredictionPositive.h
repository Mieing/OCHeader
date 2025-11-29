@class NSString;

@interface CaraPredictionPositive : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL positive;
@property (nonatomic) float prob;

+ (void)initialize;

- (id)initWithUUID:(id)a0;
- (id)initWithUUID:(id)a0 positive:(BOOL)a1 prob:(float)a2;
- (BOOL)isPositiveValid;
- (BOOL)isProbValid;

@end
