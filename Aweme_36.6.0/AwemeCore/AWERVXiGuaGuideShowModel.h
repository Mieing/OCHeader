@class NSString;

@interface AWERVXiGuaGuideShowModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverURL;
@property (nonatomic) BOOL isForceGuide;
@property (copy, nonatomic) id /* block */ xigGuideViewBlock;

- (void).cxx_destruct;

@end
