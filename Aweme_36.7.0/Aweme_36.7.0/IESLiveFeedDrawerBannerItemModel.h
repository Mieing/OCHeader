@class NSArray, NSString;

@interface IESLiveFeedDrawerBannerItemModel : NSObject <IESLiveFeedDrawerItemProtocol>

@property (retain, nonatomic) NSArray *banners;
@property (copy, nonatomic) NSString *track;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeInCollectionView:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (Class)sectionClass;

@end
