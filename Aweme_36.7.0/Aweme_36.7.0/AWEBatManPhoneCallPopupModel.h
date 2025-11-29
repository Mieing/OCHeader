@class NSString;

@interface AWEBatManPhoneCallPopupModel : NSObject

@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *bizKey;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
