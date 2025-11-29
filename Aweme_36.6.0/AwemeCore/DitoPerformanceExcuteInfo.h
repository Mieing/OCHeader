@class NSString;

@interface DitoPerformanceExcuteInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subName;
@property (nonatomic) double start;
@property (nonatomic) double end;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;

@end
