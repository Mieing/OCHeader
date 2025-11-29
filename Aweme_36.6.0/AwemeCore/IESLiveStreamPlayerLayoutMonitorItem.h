@class NSNumber;

@interface IESLiveStreamPlayerLayoutMonitorItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerViewFrame;
@property (nonatomic) long long playerScaleType;
@property (nonatomic) long long playerAlignMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerCropAreaFrame;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) long long roomScene;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;

- (void).cxx_destruct;

@end
