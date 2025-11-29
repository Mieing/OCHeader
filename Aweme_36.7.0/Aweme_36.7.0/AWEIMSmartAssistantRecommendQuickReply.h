@class NSString;

@interface AWEIMSmartAssistantRecommendQuickReply : GPBMessage

@property (nonatomic) long long id_p;
@property (nonatomic) BOOL hasId_p;
@property (nonatomic) long long source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasIndex;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (copy, nonatomic) NSString *layerIconDark;
@property (nonatomic) BOOL hasLayerIconDark;
@property (copy, nonatomic) NSString *layerIconLight;
@property (nonatomic) BOOL hasLayerIconLight;
@property (copy, nonatomic) NSString *panelIconDark;
@property (nonatomic) BOOL hasPanelIconDark;
@property (copy, nonatomic) NSString *panelIconLight;
@property (nonatomic) BOOL hasPanelIconLight;

+ (id)descriptor;

@end
