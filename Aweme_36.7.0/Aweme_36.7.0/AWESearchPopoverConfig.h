@class NSString;

@interface AWESearchPopoverConfig : NSObject

@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) BOOL isCenter;
@property (nonatomic) BOOL clickable;
@property (nonatomic) BOOL hideTaskImage;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *userFrom;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ hideCompletion;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (nonatomic) double arrowGap;

- (void).cxx_destruct;

@end
