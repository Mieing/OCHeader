@class NSMutableArray;

@interface ACCAIGCUnifyLoadingViewSubTitleTaskQueue : NSObject

@property (nonatomic) unsigned long long groupType;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (nonatomic) long long currentIndex;

- (void).cxx_destruct;
- (id)initWithGroupType:(unsigned long long)a0;

@end
