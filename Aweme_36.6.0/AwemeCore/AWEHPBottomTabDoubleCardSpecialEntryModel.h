@class UIImage, NSDictionary, NSString;

@interface AWEHPBottomTabDoubleCardSpecialEntryModel : AWEHPBottomTabBaseSpecialEntryModel <AWEHPBottomTabDoubleCardSpecialEntryProtocol>

@property (retain, nonatomic) UIImage *frontDarkImage;
@property (retain, nonatomic) UIImage *frontLightImage;
@property (retain, nonatomic) UIImage *backDarkImage;
@property (retain, nonatomic) UIImage *backLightImage;
@property (nonatomic) BOOL needAnimate;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSDictionary *bizTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specialEntryType;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
