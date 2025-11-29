@class NSString, BDSCBackgroundUIModel;

@interface BDSCControlViewModel : NSObject

@property (retain, nonatomic) BDSCBackgroundUIModel *background;
@property (copy, nonatomic) NSString *panelImage;
@property (copy, nonatomic) NSString *failedPanelImage;
@property (copy, nonatomic) NSString *lottieJsonUrl;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
