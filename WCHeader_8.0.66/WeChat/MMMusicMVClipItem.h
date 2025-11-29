@class NSString, MMMusicMVTrackItemLocalPic;

@interface MMMusicMVClipItem : NSObject

@property (retain, nonatomic) NSString *clipId;
@property (retain, nonatomic) NSString *videoLocalPath;
@property (retain, nonatomic) NSString *videoThumbPath;
@property (retain, nonatomic) MMMusicMVTrackItemLocalPic *localPic;

- (BOOL)isVaild;
- (id)description;
- (void).cxx_destruct;

@end
