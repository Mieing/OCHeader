@class UILabel, MMFinderLiveSongItem, NSString;

@interface MMFinderLiveAddSongItemTableViewCell : MMFinderLiveDeletableInputTableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) MMFinderLiveSongItem *item;
@property (retain, nonatomic) UILabel *warningLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithItem:(id)a0 maxWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configWithSongItem:(id)a0;
- (long long)textFieldWordLimit;
- (void)customizeTextField:(id)a0;
- (void)customLayoutSubviews;
- (id)getCurrentSongName;
- (void)textFieldDidChangeContent:(id)a0;
- (void).cxx_destruct;

@end
