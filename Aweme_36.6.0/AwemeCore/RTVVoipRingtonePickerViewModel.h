@class NSString, NSMutableArray, RTVVoipRingtoneListViewModel;
@protocol RTVVoipRingtoneComponentInterface;

@interface RTVVoipRingtonePickerViewModel : NSObject <RTVVoipRingtoneListViewModelDelegate>

@property (retain, nonatomic) id<RTVVoipRingtoneComponentInterface> ringtoneComponent;
@property (retain, nonatomic) NSMutableArray *dataSourceArray;
@property (nonatomic) unsigned long long defaultTabType;
@property (retain, nonatomic) RTVVoipRingtoneListViewModel *recommendListViewModel;
@property (retain, nonatomic) RTVVoipRingtoneListViewModel *hotListViewModel;
@property (retain, nonatomic) RTVVoipRingtoneListViewModel *collectListViewModel;
@property (retain, nonatomic) RTVVoipRingtoneListViewModel *historyListViewModel;
@property (retain, nonatomic) RTVVoipRingtoneListViewModel *searchListViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMusicFavoriteStatusChangeWithModel:(id)a0;
- (void)onMusicApplyStatusChangeWithModel:(id)a0 isApply:(BOOL)a1;
- (void)updateCurrentUserRingtoneIfNeed:(id)a0;
- (void)resetRingtone;
- (void).cxx_destruct;
- (id)init;

@end
