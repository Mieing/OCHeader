@class NSMutableDictionary, NSString, PrologueMsgSectionProperty, NSMutableArray;

@interface CBPrologueSectionInfo : NSObject

@property (retain, nonatomic) PrologueMsgSectionProperty *metaInfo;
@property (retain, nonatomic) NSMutableDictionary *sectionDic;
@property (nonatomic) unsigned int status;
@property (readonly, nonatomic) NSString *displayListKey;
@property (retain, nonatomic) NSMutableArray *displayMsgList;
@property (retain, nonatomic) NSMutableArray *foldMsgList;
@property (retain, nonatomic) NSMutableArray *allMsgList;

- (id)init;
- (void)updateStatusToExpanded;
- (long long)newListDefaultUnfoldDisplayCount;
- (long long)newListExpandCount;
- (long long)historyListDefaultUnfoldDisplayCount;
- (long long)historyListExpandCount;
- (void).cxx_destruct;

@end
