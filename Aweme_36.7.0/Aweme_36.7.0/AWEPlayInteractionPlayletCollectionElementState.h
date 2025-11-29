@class NSString, NSNumber;

@interface AWEPlayInteractionPlayletCollectionElementState : NSObject

@property (copy, nonatomic) NSString *playletID;
@property (retain, nonatomic) NSNumber *currentEpisode;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *referString;

- (void).cxx_destruct;

@end
