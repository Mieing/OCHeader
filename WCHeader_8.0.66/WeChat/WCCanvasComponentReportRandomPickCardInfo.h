@interface WCCanvasComponentReportRandomPickCardInfo : WCCanvasComponentReportBasicInfo

@property (nonatomic) unsigned int pickedCardClickNum;
@property (nonatomic) unsigned int unPickedCardClickNum;

- (id)dictionaryRepresentation;

@end
