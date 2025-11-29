@class NSString, AWEFeedChannelEnterModel;

@interface AWEHPEnterTabTrackModel : NSObject

@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *tabID;
@property (retain, nonatomic) AWEFeedChannelEnterModel *enterModel;
@property (copy, nonatomic) id /* block */ getCustomParamsBlock;

- (void).cxx_destruct;

@end
