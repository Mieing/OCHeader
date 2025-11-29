@class NSMutableArray;

@interface WCTimelineActionSheet : WCActionSheet

@property (nonatomic) BOOL oversea;
@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic) BOOL shownWithBadge;

+ (id)defaultCancelSheet:(id)a0;
+ (id)defaultCancelSheetForOversea:(id)a0;

- (void)reportOnShow;
- (void)reportOnSelected:(long long)a0;
- (void)reportOnOpenedURL:(long long)a0 success:(BOOL)a1;
- (void)reportForFinderActionsheetItemSelect:(long long)a0;
- (void)reportForFinderActionsheetItemEndExpose:(long long)a0;
- (unsigned int)mapReportClickType:(long long)a0;
- (void)configDynamicSection:(id)a0;
- (BOOL)realContainSection:(id)a0;
- (void)addSelectPhotoSection;
- (BOOL)dynamicAddCameraSection;
- (BOOL)dynamicAddFinderPostSection;
- (BOOL)dynamicAddMiaoJianSection;
- (BOOL)dynamicAddSpringSection;
- (void).cxx_destruct;

@end
