@class NSString;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MMBGMPanelPublishContext : NSObject

@property (copy, nonatomic) NSString *sourceFeedId;
@property (nonatomic) unsigned long long postEnterScene;
@property (copy, nonatomic) NSString *editId;
@property (copy, nonatomic) NSString *postId;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) unsigned long long currentBgmPanelTabType;
@property (retain, nonatomic) id<MMBGMSelectedMusicDataProtocol> currentSelectedMusic;
@property (nonatomic) int finderCommentScene;

- (id)init;
- (id)genFixedDataReportDict;
- (void).cxx_destruct;

@end
