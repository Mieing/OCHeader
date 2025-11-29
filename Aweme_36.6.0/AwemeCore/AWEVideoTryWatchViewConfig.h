@class AWECodeGenEntertainmentUIConfigModel;

@interface AWEVideoTryWatchViewConfig : NSObject

@property (retain, nonatomic) AWECodeGenEntertainmentUIConfigModel *uiConfig;
@property (nonatomic) BOOL shouldShowLeadLabel;
@property (nonatomic) BOOL shouldShowMidLabel;

- (void).cxx_destruct;

@end
