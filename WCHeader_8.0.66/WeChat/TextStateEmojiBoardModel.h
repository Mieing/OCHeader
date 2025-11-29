@class TextStatePublishRecommendIconGroup, TextStatePublishIconList, TextStatePublishIconGroup, TextStateRecentIconList;
@protocol TextStateEmojiBoardModelDelegate;

@interface TextStateEmojiBoardModel : NSObject

@property (retain, nonatomic) TextStatePublishIconList *publishIconList;
@property (retain, nonatomic) TextStatePublishIconGroup *recentIconGroup;
@property (retain, nonatomic) TextStateRecentIconList *recentIconList;
@property (retain, nonatomic) TextStatePublishRecommendIconGroup *recommendIconGroup;
@property (weak, nonatomic) id<TextStateEmojiBoardModelDelegate> delegate;
@property (readonly, nonatomic) TextStatePublishIconList *iconList;

- (id)initWithPublishIconList:(id)a0;
- (void)appendRecentUsedIcon:(id)a0;
- (void)startRequestCustomIconRecommendData:(id)a0;
- (void)onHandleCustomRecommendData:(id)a0 resp:(id)a1;
- (BOOL)checkIconListReloadBeforeShow;
- (id)mmkvKey;
- (void).cxx_destruct;

@end
