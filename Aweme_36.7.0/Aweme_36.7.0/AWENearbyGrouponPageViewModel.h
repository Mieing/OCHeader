@class AWENearbyGrouponPageInfo, NSString, NSDictionary;

@interface AWENearbyGrouponPageViewModel : NSObject

@property (retain, nonatomic) AWENearbyGrouponPageInfo *pageInfo;
@property (copy, nonatomic) NSString *rootTag;
@property (copy, nonatomic) NSDictionary *nodeMap;
@property (copy, nonatomic) NSDictionary *containerNodeMap;

- (id)nodeWithTag:(id)a0;
- (id)initWithRootTag:(id)a0 pageInfo:(id)a1 nodeMap:(id)a2;
- (void)p_fetchContainerNodeMap;
- (id)containerNodeMapFromNodeMap:(id)a0;
- (id)componentNodeTagListInTreeWhichAsRoot:(id)a0;
- (void).cxx_destruct;

@end
