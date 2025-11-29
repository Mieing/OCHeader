@class NSString, NSNumber, NSDictionary;

@interface AWEPlayletEpisodeProgressHistoryModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *playletID;
@property (retain, nonatomic) NSNumber *currentEpisode;
@property (copy, nonatomic) NSDictionary *progressDict;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
