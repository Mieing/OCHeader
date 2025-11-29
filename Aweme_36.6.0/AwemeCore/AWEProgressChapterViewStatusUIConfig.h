@class AWEProgressChapterUIConfig;

@interface AWEProgressChapterViewStatusUIConfig : NSObject

@property (retain, nonatomic) AWEProgressChapterUIConfig *chapterNormalConfig;
@property (retain, nonatomic) AWEProgressChapterUIConfig *chapterActiveConfig;
@property (retain, nonatomic) AWEProgressChapterUIConfig *chapterDraggingConfig;
@property (retain, nonatomic) AWEProgressChapterUIConfig *chapterStableConfig;

- (void).cxx_destruct;

@end
