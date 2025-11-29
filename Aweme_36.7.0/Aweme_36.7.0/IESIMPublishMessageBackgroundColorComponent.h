@class NSNumber, NSString, IESIMPublishMessageColorConfig;

@interface IESIMPublishMessageBackgroundColorComponent : AWEIMComponentBase <IESIMPublishMessageBackgroundColorService>

@property (retain, nonatomic) IESIMPublishMessageColorConfig *colorConfig;
@property (retain, nonatomic) IESIMPublishMessageColorConfig *topMaskColorConfig;
@property (retain, nonatomic) IESIMPublishMessageColorConfig *bottomMaskColorConfig;
@property (retain, nonatomic) NSNumber *colorNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)colorInfoNumber;
- (id)getColorConfig;
- (id)getTopMaskColorConfig;
- (id)getBottomMaskColorConfig;
- (id)colorConfigSetting;
- (id)p_getRandomColorConfigWithColorInfo:(id)a0;
- (id)topMaskColorConfigSetting;
- (id)bottomMaskColorConfigSetting;
- (id)getRandomNumber;
- (void).cxx_destruct;

@end
