@class IESECWinRecommendStoreModel, NSString;

@interface IESECWinEnterStoreObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) IESECWinRecommendStoreModel *recommendStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
