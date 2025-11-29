@class NSString;

@interface RTVInteractionMessageListCellViewModel : NSObject <RTVUICellModelDiffableInterface, RxPrimaryKey>

@property (copy, nonatomic) NSString *senderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
