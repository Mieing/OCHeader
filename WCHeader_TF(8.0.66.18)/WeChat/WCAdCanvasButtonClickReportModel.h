@class NSString, NSDictionary;

@interface WCAdCanvasButtonClickReportModel : NSObject

@property (retain, nonatomic) NSString *snsid;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *viewid;
@property (retain, nonatomic) NSString *commInfo;
@property (retain, nonatomic) NSDictionary *extInfo;
@property (nonatomic) int originScene;
@property (nonatomic) int action;
@property (nonatomic) int subType;
@property (nonatomic) int type;
@property (nonatomic) int halfScreenMode;

- (void).cxx_destruct;

@end
