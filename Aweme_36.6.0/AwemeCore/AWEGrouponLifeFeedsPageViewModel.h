@class NSArray, NSDictionary, NSString, AWEGrouponLifeFeedsPageInfo;

@interface AWEGrouponLifeFeedsPageViewModel : NSObject

@property (copy, nonatomic) NSDictionary *viewModelMap;
@property (retain, nonatomic) NSArray *layoutSectionList;
@property (copy, nonatomic) NSDictionary *networkTrackParams;
@property (nonatomic) BOOL isErrorPrompt;
@property (retain, nonatomic) AWEGrouponLifeFeedsPageInfo *pageInfo;
@property (copy, nonatomic) NSString *rootTag;
@property (copy, nonatomic) NSDictionary *nodeMap;
@property (copy, nonatomic) NSDictionary *containerNodeMap;
@property (copy, nonatomic) NSDictionary *viewModelMap;
@property (retain, nonatomic) NSArray *layoutSectionList;
@property (copy, nonatomic) NSDictionary *networkTrackParams;
@property (nonatomic) BOOL isErrorPrompt;

- (id)nodeWithTag:(id)a0;
- (id)initWithRootTag:(id)a0 pageInfo:(id)a1 nodeMap:(id)a2;
- (void)p_fetchContainerNodeMap;
- (id)containerNodeMapFromNodeMap:(id)a0;
- (long long)numberOfComponentInContainer:(id)a0;
- (long long)numberOfComponentInContainer:(id)a0 blackSubTypeList:(id)a1;
- (void)setupViewModelIndex;
- (id)componentNodeTagListInTreeWhichAsRoot:(id)a0;
- (id)viewModelWithTag:(id)a0;
- (void).cxx_destruct;

@end
