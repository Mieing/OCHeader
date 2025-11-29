@class NSString;

@interface MMScheduleItem : NSObject <NSCopying>

@property (retain, nonatomic) NSString *displayStr;
@property (nonatomic) double timeInterval;
@property (retain, nonatomic) NSString *lineText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayStr:(id)a0 time:(double)a1;
- (void).cxx_destruct;

@end
