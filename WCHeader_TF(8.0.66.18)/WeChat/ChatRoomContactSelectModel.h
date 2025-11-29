@class NSArray, ChatRoomContactSelectSectionModel;
@protocol ChatRoomContactSelectModelDelegate;

@interface ChatRoomContactSelectModel : MMObject

@property (retain, nonatomic) NSArray *sectionList;
@property (retain, nonatomic) NSArray *normalSectionList;
@property (retain, nonatomic) ChatRoomContactSelectSectionModel *atAllSection;
@property (retain, nonatomic) ChatRoomContactSelectSectionModel *referMsgSection;
@property (retain, nonatomic) ChatRoomContactSelectSectionModel *recentAtSection;
@property (weak, nonatomic) id<ChatRoomContactSelectModelDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)reloadData;
- (unsigned long long)recentAtCount;
- (void).cxx_destruct;

@end
