@class NSString;

@interface WAReportVideoActionItem : WAReportBaseItem

@property (nonatomic) unsigned int isFullScreen;
@property (nonatomic) unsigned int eventId;
@property (retain, nonatomic) NSString *eventNote;
@property (nonatomic) unsigned int clientTimestamp;
@property (nonatomic) unsigned int publiclibversion;
@property (retain, nonatomic) NSString *videoTitle;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *eventNote1;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
