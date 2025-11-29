@class LynxPlatformLength;

@interface LynxBackgroundSize : NSObject

@property (retain, nonatomic) LynxPlatformLength *value;

- (BOOL)isCover;
- (BOOL)isContain;
- (double)apply:(double)a0 currentValue:(double)a1;
- (id)initWithLength:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAuto;

@end
