@class EmoticonStoreItem;

@interface EmoticonPackageStateItem : NSObject

@property (nonatomic) long long m_state;
@property (nonatomic) float m_process;
@property (retain, nonatomic) EmoticonStoreItem *m_item;

- (void).cxx_destruct;

@end
