@class UIColor;

@interface POIMediaPlayerAlbumProgressContainerConfig : NSObject

@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double containerHeight;
@property (nonatomic) double containerMargin;
@property (nonatomic) double progressHeight;
@property (nonatomic) double progressMargin;
@property (nonatomic) BOOL shouldHideProgressInSingleMode;

- (void).cxx_destruct;
- (id)init;

@end
