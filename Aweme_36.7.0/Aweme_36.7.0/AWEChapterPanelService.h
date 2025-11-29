@class NSString;

@interface AWEChapterPanelService : HTSService <AWEChapterPanelService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)landscapeChapterProgressType;
+ (void)chapterShowWithModel:(id)a0 height:(double)a1 referString:(id)a2 enterMethod:(id)a3 fromPage:(id)a4 delegate:(id)a5 context:(id)a6 logExtraDict:(id)a7;
+ (id)viewControllerWithModel:(id)a0 referString:(id)a1 enterMethod:(id)a2 fromPage:(id)a3 delegate:(id)a4 landscapeDelegate:(id)a5;
+ (id)landscapeChapterEntranceViewithType:(long long)a0;


@end
