@class NSString, AWEPlayInteractionSnackBarConfig;

@interface AWEPlayInteractionSnackBar : DUXBottomNotification <AWEPlayInteractionSnackBarProtocol>

@property (retain, nonatomic) AWEPlayInteractionSnackBarConfig *snakeBarConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0 bottomOffset:(double)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
