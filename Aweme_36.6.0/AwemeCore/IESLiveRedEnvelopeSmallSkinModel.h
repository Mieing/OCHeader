@class HTSLiveImage;
@protocol IESLiveWebPDecoder;

@interface IESLiveRedEnvelopeSmallSkinModel : NSObject

@property (nonatomic) long long boxId;
@property (retain, nonatomic) HTSLiveImage *waitIcon;
@property (retain, nonatomic) HTSLiveImage *outNoMoreWebp;
@property (retain, nonatomic) id<IESLiveWebPDecoder> outNoMoreWebpDecoder;
@property (retain, nonatomic) HTSLiveImage *outWithMoreWebp;
@property (retain, nonatomic) id<IESLiveWebPDecoder> outWithMoreWebpDecoder;
@property (retain, nonatomic) HTSLiveImage *enterSkin;

- (void).cxx_destruct;

@end
