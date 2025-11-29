@class NSString, AWESocialRelationObserver;

@interface AWEMateListBaseSectionViewModel : AWEBaseListSectionViewModel <AWEUserMessage>

@property (nonatomic) long long sectionType;
@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)setupViewModel;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (void)enterUserProfile:(long long)a0;
- (void)updateSectionData:(id)a0;
- (void)trackEnterUserProfile:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
