@class IESGCPDetailGameAnnouncementThemeConfig, NSString, IESGCPPBGameDetailAnnouncement;
@protocol IESGCPURLSchemaHandler;

@interface IESGCPDetailGameAnnouncementViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPPBGameDetailAnnouncement *gameAnnouncement;
@property (retain, nonatomic) IESGCPDetailGameAnnouncementThemeConfig *themeConfig;
@property (readonly, copy, nonatomic) NSString *announcementTitle;
@property (readonly, copy, nonatomic) NSString *announcementURL;
@property (readonly, copy, nonatomic) NSString *originalJumpContent;
@property (readonly, copy, nonatomic) NSString *popLayerWord;
@property (readonly, nonatomic) int actionType;
@property (readonly, nonatomic) int announcementType;
@property (readonly, nonatomic) id<IESGCPURLSchemaHandler> urlSchemaHandler;

- (id)getTrackerEncodedString;
- (void).cxx_destruct;

@end
