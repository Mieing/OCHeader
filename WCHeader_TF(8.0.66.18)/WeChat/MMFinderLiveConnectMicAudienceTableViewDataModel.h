@class NSMutableArray;

@interface MMFinderLiveConnectMicAudienceTableViewDataModel : NSObject

@property (retain, nonatomic) NSMutableArray *sectionTypeList;
@property (nonatomic) unsigned long long cellCountInMicUserSection;
@property (nonatomic) unsigned long long cellCountInApplyingMicUserSection;
@property (nonatomic) unsigned long long cellCountInCanBeInvitedMicUserSection;

- (id)initWithMicUsersCount:(unsigned long long)a0 applyingMicUsersCount:(unsigned long long)a1 isAudiencePkEnable:(BOOL)a2 canBeInvitedMicUsersCount:(unsigned long long)a3 isPaidConnectMic:(BOOL)a4 canShowKtvSongList:(BOOL)a5;
- (long long)numberOfRowsInSection:(long long)a0;
- (long long)numberOfSections;
- (unsigned long long)cellTypeForRowAtIndexPath:(id)a0;
- (unsigned long long)sectionTypeForSection:(long long)a0;
- (void).cxx_destruct;

@end
