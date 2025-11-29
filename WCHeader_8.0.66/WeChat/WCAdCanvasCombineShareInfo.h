@class NSString, WCADCanvasGiveHBCardInfo;

@interface WCAdCanvasCombineShareInfo : NSObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (retain, nonatomic) NSString *originSnsId;
@property (retain, nonatomic) NSString *originUxInfo;
@property (nonatomic) unsigned int originAdType;
@property (retain, nonatomic) NSString *originAid;
@property (retain, nonatomic) NSString *originTraceId;
@property (retain, nonatomic) NSString *originAdCanvasExt;
@property (retain, nonatomic) NSString *originSKAdItems;
@property (nonatomic) BOOL isInteractiveCanvas;
@property (retain, nonatomic) WCADCanvasGiveHBCardInfo *giveHBCardInfo;

- (void).cxx_destruct;

@end
