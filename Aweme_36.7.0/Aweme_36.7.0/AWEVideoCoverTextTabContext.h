@class AWEVideoCoverRecommendTextDataLoader, AWEVideoCoverFontDataLoader;

@interface AWEVideoCoverTextTabContext : NSObject

@property (retain, nonatomic) AWEVideoCoverRecommendTextDataLoader *textLoader;
@property (retain, nonatomic) AWEVideoCoverFontDataLoader *fontLoader;
@property (nonatomic) BOOL isFontStyleDisable;
@property (nonatomic) BOOL isShowHistory;

- (void).cxx_destruct;

@end
