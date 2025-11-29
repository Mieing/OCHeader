@class NSString, FinderMusicReportInfo, MMBGMSelectedMusicResult, NSData, FinderVideoTemplateInfo;

@interface MJPublisherPostInfo : NSObject

@property (retain, nonatomic) MMBGMSelectedMusicResult *appliedMusicInfo;
@property (retain, nonatomic) NSString *movieTitle;
@property (retain, nonatomic) FinderMusicReportInfo *shootMusicReportInfo;
@property (retain, nonatomic) FinderMusicReportInfo *editMusicReportInfo;
@property (copy, nonatomic) NSString *photoToVideoGPSAssetId;
@property (nonatomic) BOOL isRealShootContent;
@property (retain, nonatomic) NSData *captionReportData;
@property (copy, nonatomic) NSString *mjComposingTimelineJsonString;
@property (copy, nonatomic) NSData *mjComposingTimelineData;
@property (retain, nonatomic) FinderVideoTemplateInfo *aigcAsyncTemplateInfo;

- (void).cxx_destruct;

@end
