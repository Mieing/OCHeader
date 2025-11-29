@class HTSLivePreviewExposeData_PreviewExitGuide;

@interface LiveTabGuideResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewExitGuide *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
