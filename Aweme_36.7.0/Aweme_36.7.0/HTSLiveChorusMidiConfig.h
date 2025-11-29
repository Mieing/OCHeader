@class NSString, HTSLiveImage;

@interface HTSLiveChorusMidiConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *advanScatterDecoA;
@property (nonatomic) BOOL hasAdvanScatterDecoA;
@property (retain, nonatomic) HTSLiveImage *advanScatterDecoB;
@property (nonatomic) BOOL hasAdvanScatterDecoB;
@property (retain, nonatomic) HTSLiveImage *buoyAreaBg;
@property (nonatomic) BOOL hasBuoyAreaBg;
@property (retain, nonatomic) HTSLiveImage *buoyBall;
@property (nonatomic) BOOL hasBuoyBall;
@property (retain, nonatomic) HTSLiveImage *buoyTailing;
@property (nonatomic) BOOL hasBuoyTailing;
@property (retain, nonatomic) HTSLiveImage *univScatterDecoA;
@property (nonatomic) BOOL hasUnivScatterDecoA;
@property (retain, nonatomic) HTSLiveImage *univScatterDecoB;
@property (nonatomic) BOOL hasUnivScatterDecoB;
@property (copy, nonatomic) NSString *scoreColor;

+ (id)descriptor;

@end
