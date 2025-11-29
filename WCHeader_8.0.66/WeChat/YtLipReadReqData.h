@class NSString, NSArray, YtExtraOptions, YtFaceFrameInfo;

@interface YtLipReadReqData : NSObject

@property (retain) NSString *appId;
@property (retain) NSString *sessionId;
@property float lux;
@property (retain) NSString *version;
@property (retain) NSString *audio;
@property (retain) NSString *featureData;
@property (retain) NSString *lipReadingData;
@property (retain) NSString *actData;
@property (retain) NSArray *frameList;
@property (retain) NSArray *shapeList;
@property (retain) YtExtraOptions *extraOptions;
@property (retain) NSString *extraData;
@property (retain) YtFaceFrameInfo *bestImage;

- (void).cxx_destruct;

@end
