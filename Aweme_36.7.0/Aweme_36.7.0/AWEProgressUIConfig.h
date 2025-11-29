@class AWEProgressChapterViewStatusUIConfig, AWEProgressIndicatorStatusUIConfig, AWEProgressViewStatusUIConfig, AWEProgressPreviewViewStatusUIConfig;

@interface AWEProgressUIConfig : NSObject

@property (retain, nonatomic) AWEProgressViewStatusUIConfig *progressViewConfig;
@property (retain, nonatomic) AWEProgressIndicatorStatusUIConfig *indicatorConfig;
@property (retain, nonatomic) AWEProgressPreviewViewStatusUIConfig *thumbConfig;
@property (retain, nonatomic) AWEProgressChapterViewStatusUIConfig *chapterConfig;

- (void).cxx_destruct;

@end
