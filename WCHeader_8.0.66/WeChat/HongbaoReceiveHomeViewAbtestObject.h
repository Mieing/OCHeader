@class UIColor;

@interface HongbaoReceiveHomeViewAbtestObject : NSObject

@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowRadius;
@property (nonatomic) BOOL hasRedSkin;

- (id)initWithConfig:(BOOL)a0;
- (void)convertAbtestObjectFromAbtestString:(id)a0;
- (void).cxx_destruct;

@end
