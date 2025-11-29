@class NSString, MMFinderLiveLiveVoteChoice;

@interface MMFinderLiveCreateVoteChoiceTableViewCell : MMFinderLiveDeletableInputTableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) MMFinderLiveLiveVoteChoice *choice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setIsAddCell:(BOOL)a0;
- (void)customLayoutSubviews;
- (void)prepareForReuse;
- (void)configWithChoice:(id)a0;
- (id)getCurrentSongName;
- (long long)textFieldWordLimit;
- (void)textFieldDidChangeContent:(id)a0;
- (void)customizeTextField:(id)a0;
- (void).cxx_destruct;

@end
