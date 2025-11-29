@class NSDictionary, NSString, AWEAwemeModel;

@interface AWEStoryImpl.StoryFeedBottomBarContext : NSObject <AWEAwemeDetailBottomBarCommonContextProtocol> {
    void /* function */ liteTaskInfo;
    void /* function */ previousPage;
    void /* function */ referString;
    void /* function */ enterFrom;
    void /* function */ logExtraDict;
    void /* function */ businessDict;
}

@property (nonatomic, copy) NSDictionary *liteTaskInfo;
@property (nonatomic, copy) NSString *previousPage;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, retain) AWEAwemeModel *awemeModel;
@property (nonatomic, weak) void /* function */ viewController;
@property (nonatomic, copy) NSDictionary *logExtraDict;
@property (nonatomic, copy) NSDictionary *businessDict;
@property (nonatomic) BOOL canShowBottomBarInListCell;

- (void).cxx_destruct;
- (id)init;

@end
