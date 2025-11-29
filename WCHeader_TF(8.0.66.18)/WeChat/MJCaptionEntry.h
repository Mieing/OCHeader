@class NSString, NSArray;

@interface MJCaptionEntry : NSObject

@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSArray *captionItems;

- (id)initWithLanguage:(id)a0 captionItems:(id)a1;
- (id)copyWithSpeedRatio:(double)a0 parentStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)description;
- (void).cxx_destruct;

@end
