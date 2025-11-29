@class PreviewExitGuideResponse_PreviewExitGuideData;

@interface PreviewExitGuideResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PreviewExitGuideResponse_PreviewExitGuideData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
