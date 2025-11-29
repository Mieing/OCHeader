@class NSString;
@protocol AWEMessageReachCommonDialogAbility;

@interface AWEMessageReachDialogConfig : NSObject <AWEMessageReachDialogConfigProtocol>

@property (retain, nonatomic) id<AWEMessageReachCommonDialogAbility> ability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
