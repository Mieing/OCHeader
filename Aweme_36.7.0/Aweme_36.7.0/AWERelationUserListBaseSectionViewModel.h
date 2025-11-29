@class NSString;

@interface AWERelationUserListBaseSectionViewModel : AWEBaseListSectionViewModel

@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) BOOL isFriends;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *enterFrom;

- (void)setupViewModel;
- (void)appendModels:(id)a0;
- (void)replaceByModels:(id)a0;
- (void)insertModel:(id)a0 atIndex:(long long)a1;
- (void)updateByModels:(id)a0;
- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)appendModels:(id)a0 animated:(BOOL)a1;
- (void)replaceByModels:(id)a0 animated:(BOOL)a1;
- (void)updateByModels:(id)a0 animated:(BOOL)a1;
- (id)convertUserModel:(id)a0;
- (id)convertUserModelsArray:(id)a0;

@end
