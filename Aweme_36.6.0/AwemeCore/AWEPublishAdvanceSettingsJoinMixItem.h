@class NSString, UIImage, AWEVideoPublishViewModel, AWEMixVideoModel, NSNumber;

@interface AWEPublishAdvanceSettingsJoinMixItem : NSObject <AWEPublishAdvanceSettingsItemProtocol>

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *arrowImage;
@property (copy, nonatomic) NSString *introText;
@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *settingKey;
@property (nonatomic) BOOL controlEnabled;
@property (copy, nonatomic) NSString *toast;
@property (weak, nonatomic) AWEVideoPublishViewModel *model;
@property (retain, nonatomic) AWEMixVideoModel *mixModel;
@property (nonatomic) BOOL switcherState;
@property (nonatomic) BOOL shouldHideLineView;
@property (retain, nonatomic) NSNumber *duetPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
