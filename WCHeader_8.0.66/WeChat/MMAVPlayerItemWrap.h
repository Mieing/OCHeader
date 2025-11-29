@class NSString, NSObject;
@protocol MMAVPlayerItem;

@interface MMAVPlayerItemWrap : NSObject

@property (retain, nonatomic) NSObject<MMAVPlayerItem> *item;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) int status;
@property (nonatomic) int targetStatus;
@property (nonatomic) BOOL isInScreen;
@property (nonatomic) BOOL shouldSkipStackOrResume;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
