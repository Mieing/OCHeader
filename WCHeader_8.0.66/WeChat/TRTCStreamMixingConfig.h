@class NSString, NSArray;

@interface TRTCStreamMixingConfig : NSObject

@property (nonatomic) int backgroundColor;
@property (copy, nonatomic) NSString *backgroundImage;
@property (copy, nonatomic) NSArray *videoLayoutList;
@property (copy, nonatomic) NSArray *audioMixUserList;
@property (copy, nonatomic) NSArray *watermarkList;

- (struct shared_ptr<trtc::StreamMixingConfig> { struct StreamMixingConfig *x0; struct __shared_weak_count *x1; })convertToCppParams;
- (id)init;
- (void).cxx_destruct;

@end
