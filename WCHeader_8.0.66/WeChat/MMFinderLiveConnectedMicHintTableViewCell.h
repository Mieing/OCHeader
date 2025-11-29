@class MMFinderLiveConnectedMicHintBaseViewCell, NSString;

@interface MMFinderLiveConnectedMicHintTableViewCell : UITableViewCell

@property (retain, nonatomic) MMFinderLiveConnectedMicHintBaseViewCell *baseView;
@property (retain, nonatomic) NSString *hint;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
