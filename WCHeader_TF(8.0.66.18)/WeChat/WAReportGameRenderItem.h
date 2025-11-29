@interface WAReportGameRenderItem : WAReportBaseItem

@property (nonatomic) int canvasType;
@property (nonatomic) int eventType;
@property (nonatomic) int eventValue;
@property (nonatomic) long long gameduration;

- (id)reportString;

@end
