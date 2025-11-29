@class UILabel, NSString;

@interface AWEUGPendantCapsuleView : UIView <AWEUGPendantCapsuleProtocol>

@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *timeString;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *bdColor;
@property (copy, nonatomic) NSString *txtColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2;
- (void)updateTextString:(id)a0;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;

@end
