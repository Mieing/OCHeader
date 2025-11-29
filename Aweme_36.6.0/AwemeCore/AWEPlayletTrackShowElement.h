@class NSString;

@interface AWEPlayletTrackShowElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)trackPlayletCellShow;
- (long long)playletBottomBarNotShowReasonCode;
- (id)playletBottomBarNotShowReasonString:(long long)a0;

@end
