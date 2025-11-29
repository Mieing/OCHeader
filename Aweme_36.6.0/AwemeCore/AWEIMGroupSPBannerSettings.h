@class NSString;

@interface AWEIMGroupSPBannerSettings : NSObject

@property (readonly, nonatomic) long long maxShowCount;
@property (readonly, nonatomic) double maxShowInterval;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *icon;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSString *disableButtonToast;
@property (readonly, nonatomic) BOOL disableCloseButton;
@property (readonly, nonatomic) BOOL forceShowBanner;
@property (readonly, nonatomic) BOOL disablePrivateChatShow;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
