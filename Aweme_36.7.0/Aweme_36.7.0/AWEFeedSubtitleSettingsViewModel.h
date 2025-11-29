@class NSMutableArray, AWEAwemeModel;
@protocol AWEFeedSubtitleSettingsTableViewDelegate;

@interface AWEFeedSubtitleSettingsViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWEFeedSubtitleSettingsTableViewDelegate> tableViewDelegate;

- (void)updateWithAwemeModel:(id)a0;
- (id)cellModelWithIndexPath:(id)a0;
- (id)switchModel;
- (void)reloadCellModelWithIdentifier:(id)a0;
- (id)languageChangedModel;
- (id)indexPathForContent:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;

@end
