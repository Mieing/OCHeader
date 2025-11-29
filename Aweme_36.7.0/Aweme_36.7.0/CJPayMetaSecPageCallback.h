@class NSMutableArray;

@interface CJPayMetaSecPageCallback : NSObject

@property (retain, nonatomic) NSMutableArray *pageStack;
@property (nonatomic) long long currentPage;

- (int)getScenePageName;
- (void).cxx_destruct;

@end
