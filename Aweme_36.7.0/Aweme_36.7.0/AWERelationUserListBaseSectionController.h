@class NSString;

@interface AWERelationUserListBaseSectionController : AWEBaseListSectionController

@property (readonly, nonatomic) NSString *pageIdentifier;
@property (readonly, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) BOOL isSearch;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long activeUserSourceType;

+ (Class)aAWERelationDOUYINHTSAdapterClass;

- (id)aAWERelationDOUYINHTSAdapter;
- (void)startIMMonitor;
- (void)removeFan:(id)a0;
- (void)updateActiveUserState:(id)a0;
- (void)pauseActiveMonitor:(id)a0;
- (void)resumeActiveMonitor:(id)a0;
- (void)createEditAliasView:(id)a0 model:(id)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)dealloc;

@end
