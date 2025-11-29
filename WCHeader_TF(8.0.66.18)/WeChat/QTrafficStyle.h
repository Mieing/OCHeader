@class UIColor;

@interface QTrafficStyle : NSObject

@property (retain, nonatomic) UIColor *smoothColor;
@property (retain, nonatomic) UIColor *smoothBorderColor;
@property (retain, nonatomic) UIColor *slowColor;
@property (retain, nonatomic) UIColor *slowBorderColor;
@property (retain, nonatomic) UIColor *congestedColor;
@property (retain, nonatomic) UIColor *congestedBorderColor;
@property (retain, nonatomic) UIColor *seriouseCongestedColor;
@property (retain, nonatomic) UIColor *seriouseCongestedBorderColor;
@property (nonatomic) int borderWidth;
@property (nonatomic) int lineWidth;

- (void).cxx_destruct;

@end
