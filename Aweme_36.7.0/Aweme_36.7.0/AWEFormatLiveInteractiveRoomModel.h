@class NSString, NSDictionary, NSNumber;

@interface AWEFormatLiveInteractiveRoomModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *enterParams;
@property (nonatomic) BOOL disableAnimate;
@property (nonatomic) long long awemeType;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *videUrl;
@property (nonatomic) double playbackTime;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;

- (void).cxx_destruct;

@end
