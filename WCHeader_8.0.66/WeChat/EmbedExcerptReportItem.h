@class NSString;

@interface EmbedExcerptReportItem : NSObject

@property (nonatomic) unsigned int bizUin;
@property (nonatomic) unsigned int appMsgId;
@property (nonatomic) unsigned int itemIdx;
@property (nonatomic) unsigned int beginOffset;
@property (nonatomic) unsigned int endOffset;
@property (copy, nonatomic) NSString *contentMd5;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int opType;

- (void)report;
- (void).cxx_destruct;

@end
