@class BaseResponseErrMsg, NSMutableArray;

@interface LbsContactInfoList : NSObject

@property (nonatomic) int iRet;
@property (retain, nonatomic) BaseResponseErrMsg *m_ErrorMsg;
@property (retain, nonatomic) NSMutableArray *lbsContactList;
@property (nonatomic) long long m_iState;
@property (nonatomic) long long m_iFlushTime;
@property (nonatomic) BOOL m_iIsShowRoom;
@property (nonatomic) long long m_iRoomMemberCount;

- (id)init;
- (id)keyPaths;
- (id)description;
- (void)addToLbsContactList:(id)a0;
- (void)removeFromLbsContactList:(id)a0;
- (unsigned long long)countOfLbsContactList;
- (void)getLbsContactList:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectInLbsContactListAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 inLbsContactListAtIndex:(unsigned long long)a1;
- (void)insertLbsContactList:(id)a0 atIndexes:(id)a1;
- (void)removeObjectFromLbsContactListAtIndex:(unsigned long long)a0;
- (void)removeLbsContactListAtIndexes:(id)a0;
- (void)replaceObjectInLbsContactListAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)replaceLbsContactListAtIndexes:(id)a0 withLbsContactList:(id)a1;
- (void).cxx_destruct;

@end
