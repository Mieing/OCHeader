@class TemplateFinderLiveOPWrap, TemplateWeappOPWrap, TemplateTingPlayListOPWrap, TemplateScheduleOPWrap, TemplateFinderMemberCenterOPWrap, TemplateWebSearchOPWrap, EcsJumpInfo, TemplateFooterOPWrap, UIColor, TemplateLiteAppOPWrap, NSString, TemplateFinderAIGCTaskWrap, TemplateFinderFeedOPWrap, TemplateFinderGameLiveOPWrap, TemplateAdvertiseOPWrap;

@interface OPItemWrap : NSObject

@property (retain, nonatomic) NSString *word;
@property (retain, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) UIColor *wordColor;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *darkModeIcon;
@property (retain, nonatomic) NSString *hintThumbNail;
@property (retain, nonatomic) NSString *hintDmThumbNail;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int tag;
@property (nonatomic) BOOL isRichText;
@property (nonatomic) unsigned int numberOfLines;
@property (retain, nonatomic) TemplateWeappOPWrap *weappOpWrap;
@property (retain, nonatomic) TemplateTingPlayListOPWrap *tingPlaylistOpWrap;
@property (retain, nonatomic) TemplateScheduleOPWrap *scheduleOpWrap;
@property (retain, nonatomic) TemplateAdvertiseOPWrap *advertiseOpWrap;
@property (retain, nonatomic) TemplateFinderLiveOPWrap *finderLiveOpWrap;
@property (retain, nonatomic) TemplateFooterOPWrap *footerOpWrap;
@property (retain, nonatomic) TemplateFinderGameLiveOPWrap *finderGameLiveOpWrap;
@property (retain, nonatomic) TemplateFinderFeedOPWrap *finderFeedOpWrap;
@property (retain, nonatomic) TemplateLiteAppOPWrap *liteAppOpWrap;
@property (retain, nonatomic) TemplateFinderMemberCenterOPWrap *finderMemberCenterOpWrap;
@property (retain, nonatomic) TemplateFinderAIGCTaskWrap *finderAIGCTaskWrap;
@property (retain, nonatomic) TemplateWebSearchOPWrap *webSearchOpWrap;
@property (nonatomic) BOOL isShowRedDot;
@property (retain, nonatomic) NSString *extId;
@property (retain, nonatomic) NSString *businessId;
@property (retain, nonatomic) NSString *opItemThumbnail;
@property (nonatomic) BOOL opItemThumbnalShowPlaybtn;
@property (retain, nonatomic) EcsJumpInfo *ecsJumpInfo;

- (void).cxx_destruct;

@end
