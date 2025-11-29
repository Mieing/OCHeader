@interface IESVSFoudationService : NSObject

@property (nonatomic) BOOL liveCelluarEnable;
@property (nonatomic) BOOL videoCelluarEnable;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPlayerPortraitFrame;
+ (id)shareInstance;

- (id)init;

@end
