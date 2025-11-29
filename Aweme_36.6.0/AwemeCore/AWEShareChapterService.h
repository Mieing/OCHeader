@class NSString;

@interface AWEShareChapterService : AWEShareCommonImpl <AWEShareSingleChapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showPanelWithAwemeModel:(id)a0 chapterIndex:(long long)a1 subTitle:(id)a2 enterFrom:(id)a3 sceneType:(long long)a4 onViewController:(id)a5;
- (id /* block */)shareConfigurationHandlerWithAwemeModel:(id)a0 chapterIndex:(long long)a1 subTitle:(id)a2 enterFrom:(id)a3 sceneType:(long long)a4;

@end
