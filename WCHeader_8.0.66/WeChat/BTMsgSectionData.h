@class NSMutableArray, CMessageWrap;

@interface BTMsgSectionData : BTBaseSectionData

@property (nonatomic) unsigned int displayMode;
@property (readonly, nonatomic) CMessageWrap *msgWrap;
@property (readonly, nonatomic) NSMutableArray *arrItemCellViewModel;
@property (readonly, nonatomic) unsigned long long sequenceId;
@property (readonly, nonatomic) unsigned int createTime;
@property (readonly, nonatomic) BOOL isExposed;
@property (readonly, nonatomic) double heightForSectionFooter;

+ (void)registerMsgSectionDataClass:(Class)a0;
+ (void)initMsgSectionDataClassList;
+ (id)createSectionDataWithMsgWrap:(id)a0 sectionWidth:(double)a1 displayMode:(unsigned int)a2 delegate:(id)a3;
+ (BOOL)canCreateSectionDataWithMsgWrap:(id)a0;

- (id)initWithMsgWrap:(id)a0 sectionWidth:(double)a1 displayMode:(unsigned int)a2 delegate:(id)a3;
- (unsigned long long)sectionType;
- (id)identifierWithRow:(unsigned long long)a0;
- (void)updateMsgWrap:(id)a0;
- (void)msgWrapMarkExposed;
- (void)msgWrapMarkValidExposed;
- (void).cxx_destruct;

@end
