@class NSString;

@interface AWEUserLoginUILayoutConfig : NSObject <AWEUserLoginUILayoutConfig>

@property (nonatomic) long long layoutStyle;
@property (readonly, nonatomic) double zoomFactor;
@property (readonly, nonatomic) double ambientHeaderHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loginPanelTypeString;
- (double)ambientHeaderHeightWithIsDeviceVertical:(BOOL)a0;

@end
