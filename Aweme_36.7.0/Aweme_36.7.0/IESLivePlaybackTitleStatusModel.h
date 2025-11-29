@class NSString;

@interface IESLivePlaybackTitleStatusModel : NSObject

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *watchPvRaw;
@property (copy, nonatomic) NSString *VStype;
@property (copy, nonatomic) NSString *vs_current_period;
@property (copy, nonatomic) NSString *vs_description;
@property (nonatomic) long long seasonid;
@property (copy, nonatomic) NSString *ownerid;
@property (nonatomic) BOOL hasSelections;
@property (nonatomic) BOOL isVerticalStream;

- (void)updatePlayCount:(id)a0;
- (id)initWithEpisodeItem:(id)a0;
- (id)statusFromEpisodeItem:(id)a0;
- (void).cxx_destruct;

@end
