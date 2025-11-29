@class NSString, NSArray, UIImage, AWEUGLiveActivityGuideInfoModel;

@interface AWEUGLiveActivityGuideConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long guideStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (copy, nonatomic) NSArray *contentImages;
@property (retain, nonatomic) UIImage *contentImage;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentHeight;
@property (nonatomic) double contentAreaHeight;
@property (copy, nonatomic) NSString *pipVideoUrlString;
@property (copy, nonatomic) NSString *pipVideoResourceString;
@property (retain, nonatomic) AWEUGLiveActivityGuideInfoModel *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
