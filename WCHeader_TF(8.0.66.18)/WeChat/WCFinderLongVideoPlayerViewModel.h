@class NSData, NSString;
@protocol WCFinderLongVideoPlayerViewModelDelegate;

@interface WCFinderLongVideoPlayerViewModel : NSObject

@property (retain, nonatomic) NSData *lastRecommendBuffer;
@property (nonatomic) BOOL isRecommendRequesting;
@property (nonatomic) BOOL hadMoreRecommend;
@property (weak, nonatomic) id<WCFinderLongVideoPlayerViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoNonceId;
@property (copy, nonatomic) NSString *encryptedVideoId;
@property (copy, nonatomic) NSString *fromUserName;
@property (copy, nonatomic) NSString *toUserName;

- (id)init;
- (int)relatedScene;
- (id)contentVMByMegaVideoId:(id)a0 videoNonceId:(id)a1 encryptedVideoId:(id)a2;
- (id)contentVMForDataItem:(id)a0;
- (void).cxx_destruct;

@end
