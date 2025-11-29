@class NSString, NSNumber;

@interface AWEPlayletWatchedFinishedHistory : NSObject

@property (retain, nonatomic) NSString *playletID;
@property (retain, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSNumber *episodeNum;
@property (nonatomic) long long materialType;

- (void).cxx_destruct;

@end
