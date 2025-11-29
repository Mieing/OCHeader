@class NSString, NSMutableArray;

@interface AutoTranslateMsgKVInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int enableModifyTime;
@property (nonatomic) BOOL didInsertSystemMsg;
@property (retain, nonatomic) NSMutableArray *translateSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enableModifyTime;
+ (void)PBArrayAdd_didInsertSystemMsg;
+ (void)PBArrayAdd_translateSessions;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
