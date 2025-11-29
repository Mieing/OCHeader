@class NSString, UIColor, NSProgress;

@interface IESLiveToastLoadingConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *webpName;
@property (copy, nonatomic) NSString *lottieName;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSProgress *loadingProgress;
@property (nonatomic) BOOL canBeClosed;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (nonatomic) BOOL canBeClosedByTapBackground;

+ (id)defaultConfig;

- (BOOL)p_isToastLoadingConfigValid;
- (void).cxx_destruct;

@end
