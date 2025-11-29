@class IESLiveRoomLinkSchemaEnterPreParam;

@interface IESLiveRoomLinkSchemaEnterPreParserTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkSchemaEnterPreParam *enterParam;

+ (void)parseParamsModel:(id)a0 roomAisle:(id)a1;

- (void)updateContextParam:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
