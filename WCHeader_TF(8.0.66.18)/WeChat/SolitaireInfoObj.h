@class NSString, NSArray;

@interface SolitaireInfoObj : NSObject

@property (nonatomic) BOOL bHasHeader;
@property (retain, nonatomic) NSString *nsKey;
@property (retain, nonatomic) NSString *nsIdentifier;
@property (nonatomic) BOOL bKeywordQuickCreate;
@property (nonatomic) BOOL bContainEnKeyword;
@property (nonatomic) BOOL isHasOccupyKeyword;
@property (nonatomic) BOOL isDeleteExistInfo;
@property (nonatomic) BOOL isOnNeedMsg;
@property (nonatomic) BOOL bFromXmlInfo;
@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long msgSvrID;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *activeUserName;
@property (nonatomic) BOOL bFromOriginEdit;
@property (retain, nonatomic) NSString *nsHeader;
@property (retain, nonatomic) NSString *nsTail;
@property (retain, nonatomic) NSString *nsExample;
@property (retain, nonatomic) NSString *nsSeparator;
@property (retain, nonatomic) NSString *nsContent;
@property (retain, nonatomic) NSArray *arrItems;

- (id)getSolitaireKey;
- (void)fixHearInfo;
- (id)createSolitaire;
- (id)getText;
- (BOOL)isHasKeyword;
- (BOOL)isHasCNKeyword;
- (BOOL)isHasENKeyword;
- (BOOL)isMathKeywordWithRegex:(id)a0;
- (BOOL)isWordExceedMaxCount;
- (id)description;
- (void).cxx_destruct;

@end
