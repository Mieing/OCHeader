@class CContact, NSString, NSMutableSet, MsgNewImgDataLogic, NSMutableArray, MMTimer;
@protocol ChatRoomToolLastUseWeAppLogicDelegate;

@interface ChatRoomToolLastUseWeAppLogic : MMObject <MsgNewImgDataLogicDelegate> {
    MMTimer *m_weAppSearchTimer;
}

@property (retain, nonatomic) MsgNewImgDataLogic *dataLogic;
@property (retain, nonatomic) NSMutableArray *msgArr;
@property (retain, nonatomic) NSMutableSet *weAppSet;
@property (retain, nonatomic) CContact *chatRoomContact;
@property (weak, nonatomic) id<ChatRoomToolLastUseWeAppLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)initData;
- (id)getLastHalfYearDate;
- (void)stopWeAppSearch;
- (void)dealloc;
- (void)reloadData;
- (BOOL)onMsgNewImgLogicDataMatch:(id)a0;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)a0 Next:(id)a1;
- (void).cxx_destruct;

@end
