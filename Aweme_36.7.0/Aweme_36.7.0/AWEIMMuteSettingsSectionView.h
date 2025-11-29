@class NSString;
@protocol AWEIMMuteSettingsRowViewDelegate;

@interface AWEIMMuteSettingsSectionView : UIView <AWEIMMuteSettingsRowViewDelegate>

@property (nonatomic) double itemOriginY;
@property (weak, nonatomic) id<AWEIMMuteSettingsRowViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewWithTitle:(id)a0 section:(id)a1;

@end
