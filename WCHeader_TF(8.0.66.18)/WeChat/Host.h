@class NSString;

@interface Host : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *origin;
@property (retain, nonatomic) NSString *substitute;
@property (nonatomic) int priority;

+ (void)initialize;

- (void)setPriority:(int)a0;
- (int)priority;
- (void)setSubstitute:(id)a0;
- (id)substitute;
- (void)setOrigin:(id)a0;
- (id)origin;

@end
