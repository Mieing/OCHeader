@class NSString, NSMutableSet;

@interface IESIMContactPickerTrackUtilComponent : AWEIMComponentBase <IESIMContactPickerTrackUtilInterface>

@property (retain, nonatomic) NSMutableSet *hasTrackedUidSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
