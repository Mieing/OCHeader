@class NSString;

@interface RxCollectionLayoutContainer : NSObject <RxCollectionLayoutContainer>

@property (nonatomic) struct RxDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } effectiveContentInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } effectiveContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 contentInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
