@class NSString, TextStateModel, NSDate;

@interface TextStateHistoryInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSString *customIconDescription;
@property (retain, nonatomic) NSString *topicId;
@property (retain, nonatomic) NSString *textStateId;
@property (nonatomic) unsigned int interactionCount;
@property (retain, nonatomic) NSDate *createDate;
@property (retain, nonatomic) NSString *defaultImageId;
@property (retain, nonatomic) TextStateModel *textState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_interactionCount;
+ (void)PBArrayAdd_defaultImageId;
+ (void)PBArrayAdd_customIconDescription;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithHistory:(id)a0 isSummary:(BOOL)a1;
- (id)initWithTextStateModel:(id)a0;
- (BOOL)updateTextStateFromHistory:(id)a0;
- (void).cxx_destruct;

@end
