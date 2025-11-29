@class IESIMContactPickerConfiguration, NSDictionary, IESIMContactPickerContext;
@protocol AWEIMGroupChatPanelControllerDelegate;

@interface IESIMContactPickerComponentContext : AWEIMComponentContext

@property (retain, nonatomic) IESIMContactPickerContext *listContext;
@property (retain, nonatomic) IESIMContactPickerConfiguration *configuration;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> groupChatPanelDelegate;
@property (copy, nonatomic) NSDictionary *groupChatTrackDict;
@property (nonatomic) BOOL contentEmpty;
@property (nonatomic) BOOL fullScreenEmpty;
@property (nonatomic) BOOL networkError;

- (void).cxx_destruct;

@end
