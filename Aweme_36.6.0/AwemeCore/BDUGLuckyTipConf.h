@class NSString, UIImage;

@interface BDUGLuckyTipConf : BDUGLuckyBDModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *contentColor;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) double showDurationMs;
@property (nonatomic) BOOL disappearTapped;
@property (nonatomic) long long contentSize;
@property (copy, nonatomic) NSString *frame;

+ (id)modelCustomPropertyMapper;

- (id)hashString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
