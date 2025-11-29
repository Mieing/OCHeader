@class NSString, NSMutableDictionary;

@interface SolitaireSessionHandler : NSObject <PBCoding>

@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSMutableDictionary *dicActiveSolitaire;
@property (retain, nonatomic) NSMutableDictionary *dicSolitaireForMatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_dicActiveSolitaire;
+ (void)PBArrayAdd_dicSolitaireForMatch;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)getSolitaireWithMsgWrap:(id)a0;
- (BOOL)dropActiveSolitaire;
- (BOOL)dropForMatchSolitaire;
- (BOOL)checkAndDropSolitaire;
- (BOOL)matchSolitaireWithInfoObj:(id)a0;
- (void)tryReportActive:(id)a0 InfoObj:(id)a1;
- (void)notifyActiveSolitaire:(id)a0;
- (void)notifyDeactiveSolitaire:(id)a0;
- (void).cxx_destruct;

@end
