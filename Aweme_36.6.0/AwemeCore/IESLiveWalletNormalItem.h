@class NSArray;

@interface IESLiveWalletNormalItem : NSObject <IESLiveWalletIGListItem>

@property (readonly, nonatomic) NSArray *cellModels;
@property (readonly, nonatomic) BOOL isAvailable;
@property (nonatomic) double sectionWidth;
@property (nonatomic) long long numOfItemInRow;
@property (nonatomic) BOOL isInMyCoinView;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)createSectionControllerWithTrackInfo:(id)a0;
- (id)initWithMyCoinModel:(id)a0 itemChangedBlock:(id /* block */)a1 updateDataBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
