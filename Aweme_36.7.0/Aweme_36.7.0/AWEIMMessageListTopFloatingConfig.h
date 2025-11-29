@class AWEIMMessageListLayoutConfig;

@interface AWEIMMessageListTopFloatingConfig : NSObject

@property (retain, nonatomic) AWEIMMessageListLayoutConfig *layoutConfig;
@property (nonatomic) BOOL isFloatMode;
@property (nonatomic) BOOL disableBlurView;
@property (nonatomic) BOOL showBottomSeparator;
@property (nonatomic) BOOL disableClipsToBounds;

- (void).cxx_destruct;
- (id)init;

@end
