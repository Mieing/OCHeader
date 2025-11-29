@class UIImage, NSDictionary, NSString;

@interface AWEHPBottomTabIconSpecialEntryModel : AWEHPBottomTabBaseSpecialEntryModel <AWEHPBottomTabIconSpecialEntryProtocol>

@property (retain, nonatomic) UIImage *darkIcon;
@property (retain, nonatomic) UIImage *lightIcon;
@property (nonatomic) double iconSize;
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
