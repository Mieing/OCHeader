@class NSArray, UIImage;
@protocol IESLiveRoomService;

@interface IESLiveBackgroundStrategy : NSObject

@property (nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) long long resType;
@property (nonatomic) BOOL shouldGauss;
@property (nonatomic) BOOL showMask;
@property (retain, nonatomic) NSArray *backgroundImgUrl;
@property (retain, nonatomic) UIImage *localImg;
@property (retain, nonatomic) UIImage *placeHolderImg;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSArray *horizontalBackgroundImgUrl;
@property (nonatomic) BOOL useAvatar;
@property (nonatomic) BOOL useWebBlur;
@property (nonatomic) BOOL isPreloadAudioBackground;
@property (retain, nonatomic) UIImage *blurImage;

- (BOOL)isSameImgUrls:(id)a0 andUrls:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
