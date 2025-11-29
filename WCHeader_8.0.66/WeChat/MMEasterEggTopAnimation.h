@class NSString;

@interface MMEasterEggTopAnimation : NSObject

@property (retain, nonatomic) NSString *pagPath;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double blockDuration;

- (id)init;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
