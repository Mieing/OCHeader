@class PreviewMorePanelData;

@interface PreviewMorePanelResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PreviewMorePanelData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
