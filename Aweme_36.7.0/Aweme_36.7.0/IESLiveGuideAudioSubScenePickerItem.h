@class NSString;

@interface IESLiveGuideAudioSubScenePickerItem : IESLiveDynamicModel

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cellFrame;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *iconImageName;
@property (retain, nonatomic) NSString *selectedIconImageName;
@property (nonatomic) BOOL selected;
@property (nonatomic) unsigned long long liveSubType;
@property (nonatomic) unsigned long long scene;

- (id)init;

@end
