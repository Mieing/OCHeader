@class NSString, NSMutableArray, MiniTaskCollectionCellViewModel;

@interface ChatBotSnapLinksCellData : NSObject

@property (nonatomic) unsigned int cellType;
@property (nonatomic) unsigned int time;
@property (retain, nonatomic) NSString *originName;
@property (retain, nonatomic) NSMutableArray *snapshotArray;
@property (retain, nonatomic) MiniTaskCollectionCellViewModel *miniTaskCellVM;

- (BOOL)isMsgStar;
- (void).cxx_destruct;

@end
