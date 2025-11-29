@class NSString, HTSLiveImage, NSDictionary;
@protocol IESLiveWebPDecoder;

@interface IESLiveRedEnvelopeSkinModel : NSObject

@property (nonatomic) long long boxId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *topIcon;
@property (retain, nonatomic) id<IESLiveWebPDecoder> topWebp;
@property (retain, nonatomic) HTSLiveImage *bottomIcon;
@property (retain, nonatomic) HTSLiveImage *backgroundIcon;
@property (retain, nonatomic) id<IESLiveWebPDecoder> backgroundWebp;
@property (retain, nonatomic) HTSLiveImage *borderIcon;
@property (retain, nonatomic) id<IESLiveWebPDecoder> borderWebp;
@property (retain, nonatomic) HTSLiveImage *unluckyIcon;
@property (retain, nonatomic) NSString *unluckyDesc;
@property (retain, nonatomic) HTSLiveImage *resultBackground;
@property (retain, nonatomic) HTSLiveImage *countdownBackgroundIcon;
@property (retain, nonatomic) NSDictionary *luckyGiftSkins;

- (void).cxx_destruct;

@end
