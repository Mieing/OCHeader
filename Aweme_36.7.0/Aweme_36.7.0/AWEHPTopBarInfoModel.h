@class NSArray;

@interface AWEHPTopBarInfoModel : NSObject

@property (nonatomic) long long currentThemeStyle;
@property (nonatomic) unsigned long long dotSceneStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentBarFrame;
@property (nonatomic) double currentBarAlpha;
@property (nonatomic) BOOL currentBarHidden;
@property (retain, nonatomic) NSArray *leftEntranceInfos;
@property (retain, nonatomic) NSArray *rightEntranceInfos;

- (void).cxx_destruct;
- (id)description;

@end
