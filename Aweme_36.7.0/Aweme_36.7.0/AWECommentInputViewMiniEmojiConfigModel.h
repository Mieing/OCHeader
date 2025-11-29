@class NSArray;

@interface AWECommentInputViewMiniEmojiConfigModel : NSObject

@property (nonatomic) unsigned long long miniEmojiPanelType;
@property (copy, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL disableMultiTab;
@property (nonatomic) BOOL needHideBottomView;

- (void).cxx_destruct;
- (id)init;

@end
