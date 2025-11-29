@class NSDictionary, NSDate;

@interface AWEEcomSearchScrollViewGlideListener : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (retain, nonatomic) NSDate *lastGlideDate;
@property (copy, nonatomic) NSDictionary *baseEventParams;
@property (nonatomic) long long threshold;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
