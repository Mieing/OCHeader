@class FinderHomePageSection_FinderEmotionSection, FinderHomePageSection_FinderVideoSection, FinderHomePageSection_FinderShopSection, FinderHomePageSection_FinderCollectionSection, FinderHomePageSection_FinderPaidCollectionSection, FinderHomePageSection_FinderMemberVideoSection, FinderHomePageSection_FinderNewLifeSection, FinderHomePageSection_FinderNativeDramaSection, NSString, FinderHomePageSection_FinderMusicSection, TabInfo, FinderHomePageSection_FinderMusicListSection, FinderHomePageSection_FinderTemplateSection, FinderHomePageSection_FinderLiveRepalySection, FinderHomePageSection_FinderQASection, NSData, FinderHomePageSection_FinderAudioSection, FinderHomePageSection_FinderCourseSection;

@interface FinderHomePageSection : WXPBGeneratedMessage

@property (nonatomic) unsigned int sectionId;
@property (retain, nonatomic) NSString *sectionName;
@property (retain, nonatomic) NSData *byPass;
@property (retain, nonatomic) FinderHomePageSection_FinderVideoSection *videoSection;
@property (retain, nonatomic) FinderHomePageSection_FinderCollectionSection *collectionSection;
@property (nonatomic) unsigned int totalCount;
@property (retain, nonatomic) FinderHomePageSection_FinderQASection *qaSection;
@property (retain, nonatomic) FinderHomePageSection_FinderMusicSection *musicSection;
@property (retain, nonatomic) FinderHomePageSection_FinderMusicListSection *musiclistSection;
@property (retain, nonatomic) FinderHomePageSection_FinderTemplateSection *templateSection;
@property (retain, nonatomic) FinderHomePageSection_FinderLiveRepalySection *liveReplaySection;
@property (retain, nonatomic) FinderHomePageSection_FinderMemberVideoSection *memberVideoSection;
@property (retain, nonatomic) FinderHomePageSection_FinderNewLifeSection *newlifeSection;
@property (retain, nonatomic) FinderHomePageSection_FinderAudioSection *audioSection;
@property (retain, nonatomic) FinderHomePageSection_FinderEmotionSection *emotionSection;
@property (retain, nonatomic) TabInfo *tabInfo;
@property (retain, nonatomic) FinderHomePageSection_FinderCourseSection *courseSection;
@property (nonatomic) unsigned int showAllButton;
@property (retain, nonatomic) FinderHomePageSection_FinderPaidCollectionSection *paidCollectionSection;
@property (retain, nonatomic) FinderHomePageSection_FinderShopSection *shopSection;
@property (retain, nonatomic) FinderHomePageSection_FinderNativeDramaSection *nativeDramaSection;

+ (void)initialize;

@end
