@class NSString, LayerBtnInfo, NSData;

@interface LayerInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *layerTitle;
@property (retain, nonatomic) NSString *layerLogo;
@property (retain, nonatomic) NSString *layerType;
@property (retain, nonatomic) NSString *layerName;
@property (retain, nonatomic) NSString *layerDescription;
@property (nonatomic) unsigned int isShowLayerBtn;
@property (retain, nonatomic) LayerBtnInfo *layerBtnInfo;
@property (retain, nonatomic) NSData *voiceUrl;
@property (retain, nonatomic) NSData *voiceData;

+ (void)initialize;

@end
