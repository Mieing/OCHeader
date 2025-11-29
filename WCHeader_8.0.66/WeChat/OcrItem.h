@class NSString, NSMutableArray, Position;

@interface OcrItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) Position *pos;
@property (nonatomic) double confidence;
@property (retain, nonatomic) NSMutableArray *label;

+ (void)initialize;

@end
