@class NSString;

@interface MMIotHwLocation : WXPBGeneratedMessage

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float scale;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *poiname;

+ (void)initialize;

@end
