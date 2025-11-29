@class NSNumber, NSString;

@interface AWETeenVoteVideoInfo : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *voteID;
@property (copy, nonatomic) NSString *voteTitle;
@property (copy, nonatomic) NSString *acceptOption;
@property (nonatomic) long long acceptOptionID;
@property (copy, nonatomic) NSString *rejectOption;
@property (nonatomic) long long rejectOptionID;
@property (nonatomic) BOOL hasOperated;

- (void).cxx_destruct;

@end
