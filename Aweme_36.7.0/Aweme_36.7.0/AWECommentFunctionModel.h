@class NSString, UIImage, NSValue;

@interface AWECommentFunctionModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSValue *iconSize;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) NSString *featureName;
@property (nonatomic) long long functionType;
@property (nonatomic) BOOL shouldShowYellowDot;
@property (nonatomic) BOOL needBackgroundColor;

- (void).cxx_destruct;

@end
