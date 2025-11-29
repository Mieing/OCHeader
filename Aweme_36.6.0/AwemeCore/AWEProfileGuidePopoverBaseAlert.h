@class NSString;
@protocol AWEProfileGuidePopoverAlertDelegate;

@interface AWEProfileGuidePopoverBaseAlert : NSObject <AWEProfileGuidePopoverAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) unsigned long long launchStamp;
@property (weak, nonatomic) id<AWEProfileGuidePopoverAlertDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
