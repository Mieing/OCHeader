@class NSString, NSDictionary, AWEIMWidgetTrackContextModel;

@interface AWEIMWidgetDelayModel : NSObject

@property (retain, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long conversationType;
@property (nonatomic) unsigned long long widgetType;
@property (retain, nonatomic) NSDictionary *extension;
@property (copy, nonatomic) NSString *widgetShowType;
@property (retain, nonatomic) AWEIMWidgetTrackContextModel *trackContext;

- (void).cxx_destruct;

@end
