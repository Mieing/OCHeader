@interface WCCanvasComponentReportFloatJumpInfo : WCCanvasComponentReportBasicActionInfo

@property (nonatomic) unsigned int autoJumpCount;
@property (nonatomic) unsigned int swipeJumpCount;

- (id)dictionaryRepresentation;

@end
