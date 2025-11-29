@class RTVEffectGameModel, NSString, NSArray;

@interface RTVEffectGameListCellModel : NSObject <RTVUICellModelDiffableInterface, RxPrimaryKey>

@property (readonly, nonatomic) RTVEffectGameModel *gameModel;
@property (readonly, copy, nonatomic) NSString *inKey;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSArray *iconURLStrings;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) unsigned long long minPlayerCount;
@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellModelWithGameModel:(id)a0;

@end
