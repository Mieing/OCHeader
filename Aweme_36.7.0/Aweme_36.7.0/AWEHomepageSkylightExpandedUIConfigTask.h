@class AWEHPSkylightUIConfig;

@interface AWEHomepageSkylightExpandedUIConfigTask : NSObject

@property (retain, nonatomic) AWEHPSkylightUIConfig *expandedUIConfig;
@property (nonatomic) BOOL animate;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
