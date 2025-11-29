@class NSString;
@protocol AWEIMChatPanelCollectionViewLayoutDataSource;

@interface AWEIMChatPanelCollectionViewHorizontalLayout : UICollectionViewFlowLayout <AWEIMChatPanelCollectionViewLayoutProtocol>

@property (weak, nonatomic) id<AWEIMChatPanelCollectionViewLayoutDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
