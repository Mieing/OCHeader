@class NSArray, NSString;

@interface AWECaptionNLEModelDataModel : NSObject

@property (copy, nonatomic) NSArray *captions;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long style;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;

- (void).cxx_destruct;

@end
