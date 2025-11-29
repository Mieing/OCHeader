@class NSArray, NSString;

@interface TemplateMsgFoldInfos : MMObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSArray *foldMsgLocalIdList;
@property (retain, nonatomic) NSArray *foldMsgTitleList;
@property (retain, nonatomic) NSArray *foldMsgUniqueIdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_foldMsgLocalIdList;
+ (void)PBArrayAdd_foldMsgTitleList;
+ (void)PBArrayAdd_foldMsgUniqueIdList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
