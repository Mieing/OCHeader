@class UIColor;

@interface WNRTEAttributeFontInfo : NSObject <NSCopying>

@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) double fontSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
