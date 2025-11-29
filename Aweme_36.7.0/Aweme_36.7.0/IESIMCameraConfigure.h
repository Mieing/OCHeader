@class NSString;

@interface IESIMCameraConfigure : NSObject <IESIMCameraConfigureInterface>

@property (nonatomic) unsigned long long position;
@property (retain, nonatomic) NSString *effectPanelString;
@property (retain, nonatomic) NSString *effectIdString;
@property (retain, nonatomic) NSString *trackInfoShootWay;
@property (retain, nonatomic) NSString *trackInfoEnterFrom;
@property (retain, nonatomic) NSString *trackInfoEnterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
