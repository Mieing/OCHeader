@class NSString, NSNumber, UIImage;

@interface IESLiveInteractPreStreamThemePreloadModel : NSObject

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorName;
@property (retain, nonatomic) NSNumber *bgDataID;
@property (nonatomic) BOOL imageDidLoad;
@property (nonatomic) BOOL animatedBgDidLoad;
@property (nonatomic) BOOL staticBgDidLoad;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *animatedBg;
@property (retain, nonatomic) UIImage *staticBg;
@property (nonatomic) long long audioThemeType;
@property (copy, nonatomic) id /* block */ allImageDidLoadBlock;

- (void)checkAllImageDidLoad;
- (void).cxx_destruct;
- (void)clean;

@end
