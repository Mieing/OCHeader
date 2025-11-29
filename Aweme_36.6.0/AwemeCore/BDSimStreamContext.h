@class NSArray, NSString, BDSimMediaPlayer, NSNumber;
@protocol BDSimVideoBSModel;

@interface BDSimStreamContext : NSObject <BDSimStreamContextImpl>

@property (retain, nonatomic) id<BDSimVideoBSModel> bsModel;
@property (retain, nonatomic) NSArray *playURLs;
@property (retain, nonatomic) id<BDSimVideoBSModel> manualBSModel;
@property (nonatomic) long long targetType;
@property (retain, nonatomic) NSNumber *calcBitrate;
@property (retain, nonatomic) NSString *HDRVideoMode;
@property (nonatomic) BOOL isCDNURLExpired;
@property (nonatomic) int projectionModelType;
@property (nonatomic) BOOL enableHDR;
@property (nonatomic) BOOL isFromCache;
@property (weak, nonatomic) BDSimMediaPlayer *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0;

@end
