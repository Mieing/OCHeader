@class NSString;

@interface AWEInteractNoticeLabelTrackManager : NSObject

@property (copy, nonatomic) NSString *labelTrack;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *userID;

+ (id)sharedManager;

- (void).cxx_destruct;

@end
