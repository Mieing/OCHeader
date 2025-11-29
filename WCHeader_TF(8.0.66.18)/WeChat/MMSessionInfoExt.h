@class NSString;

@interface MMSessionInfoExt : NSObject <PBCoding>

@property (nonatomic) unsigned int m_uLastNotifySeq;
@property (nonatomic) unsigned int m_uUndeliverCount;
@property (nonatomic) unsigned int m_uLastDeliverMsgSeq;
@property (nonatomic) BOOL m_isHidden;
@property (nonatomic) unsigned long long m_sessionState;
@property (nonatomic) long long sessionLastMsgId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_uLastNotifySeq;
+ (void)PBArrayAdd_m_uUndeliverCount;
+ (void)PBArrayAdd_m_uLastDeliverMsgSeq;
+ (void)PBArrayAdd_m_isHidden;
+ (void)PBArrayAdd_m_sessionState;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;

@end
