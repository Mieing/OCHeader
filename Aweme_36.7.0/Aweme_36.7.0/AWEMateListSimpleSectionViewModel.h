@class NSString, AFDColorRingTrackSet;

@interface AWEMateListSimpleSectionViewModel : AWEBaseListSectionViewModel <AWEUserMessage>

@property (nonatomic) BOOL isLastItem;
@property (copy, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) AFDColorRingTrackSet *ringTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)setupViewModel;
- (void)enterUserProfile:(long long)a0;
- (void)trackEnterUserProfile:(id)a0;
- (void)updateSectionData:(id)a0 isLastItem:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
