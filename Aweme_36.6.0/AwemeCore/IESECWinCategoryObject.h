@class NSArray, NSString;

@interface IESECWinCategoryObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) NSArray *categoryList;
@property (nonatomic) double stickyHeight;
@property (nonatomic) BOOL shouldSticky;
@property (nonatomic) BOOL hasSticky;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void)configSticky:(BOOL)a0;
- (BOOL)getShouldSticky;
- (void).cxx_destruct;
- (id)init;

@end
