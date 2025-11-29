@class NSString;

@interface WAReportKFSessionActionItem : WAReportBaseItem

@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) int unreadcount;
@property (nonatomic) int unreadappcount;
@property (copy, nonatomic) NSString *lastpushappid;
@property (copy, nonatomic) NSString *lastpushmsg;
@property (nonatomic) unsigned int clicktime;

- (id)reportString;
- (void).cxx_destruct;

@end
