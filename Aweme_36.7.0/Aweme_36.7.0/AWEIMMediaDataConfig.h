@class NSArray, UITableViewCell, NSDictionary;

@interface AWEIMMediaDataConfig : NSObject

@property (retain, nonatomic) UITableViewCell *selectCell;
@property (nonatomic) BOOL isCollapse;
@property (nonatomic) BOOL needReverse;
@property (nonatomic) BOOL looseCheck;
@property (nonatomic) BOOL shouldShowComment;
@property (nonatomic) BOOL shouldShowChapterPanel;
@property (nonatomic) unsigned long long sceneType;
@property (nonatomic) long long newestMessageCreateTime;
@property (retain, nonatomic) NSArray *collapseMessageTypes;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
