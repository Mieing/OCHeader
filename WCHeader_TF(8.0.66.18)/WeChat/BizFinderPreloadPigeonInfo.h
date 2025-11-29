@class NSString, NSNumber, FlutterStandardTypedData;

@interface BizFinderPreloadPigeonInfo : NSObject

@property (copy, nonatomic) NSString *fromSessionIdInfo;
@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *exportId;
@property (copy, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSNumber *mediaType;
@property (copy, nonatomic) NSString *encryptUsername;
@property (copy, nonatomic) NSString *reportInfo;
@property (retain, nonatomic) NSNumber *alignment;
@property (retain, nonatomic) NSNumber *bizFromScene;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverImgUrl;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSNumber *finderDuration;
@property (retain, nonatomic) NSNumber *finderHeight;
@property (retain, nonatomic) NSNumber *finderWidth;
@property (retain, nonatomic) NSNumber *finderCoverHeight;
@property (retain, nonatomic) NSNumber *finderCoverWidth;
@property (retain, nonatomic) NSNumber *finderMediaType;
@property (retain, nonatomic) NSNumber *currentPlayMs;
@property (retain, nonatomic) NSNumber *isLandscapeVideo;
@property (retain, nonatomic) FlutterStandardTypedData *animatedImage;

+ (id)makeWithFromSessionIdInfo:(id)a0 objectId:(id)a1 exportId:(id)a2 nonceId:(id)a3 mediaType:(id)a4 encryptUsername:(id)a5 reportInfo:(id)a6 alignment:(id)a7 bizFromScene:(id)a8 title:(id)a9 coverImgUrl:(id)a10 nickName:(id)a11 headImgUrl:(id)a12 finderDuration:(id)a13 finderHeight:(id)a14 finderWidth:(id)a15 finderCoverHeight:(id)a16 finderCoverWidth:(id)a17 finderMediaType:(id)a18 currentPlayMs:(id)a19 isLandscapeVideo:(id)a20 animatedImage:(id)a21;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
