@class NSTimeZone, NSDate;

@interface AWEPostPageScheduleDateParameter : NSObject

@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSDate *selectedDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL enableClear;
@property (nonatomic) BOOL isReedit;

- (void).cxx_destruct;

@end
