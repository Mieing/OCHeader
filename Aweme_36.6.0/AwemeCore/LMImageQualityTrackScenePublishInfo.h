@class LMImageQualityImage, NSString, LMImageQualityTrackSceneEditInfo, NSArray, NSDictionary, NSNumber, LMImageQualityVideo;

@interface LMImageQualityTrackScenePublishInfo : NSObject {
    void /* unknown type, empty encoding */ contentType;
    void /* unknown type, empty encoding */ exportContentType;
    void /* function */ attachedInfos;
    void /* function */ downgradeReason;
    void /* function */ downgradeReasonInfo;
    void /* function */ lastEditAction;
    void /* function */ exportImageType;
    void /* function */ coverHostId;
}

@property (nonatomic, readonly) NSString *exportResolution;
@property (nonatomic, readonly) NSString *exportBitrate;
@property (nonatomic, readonly) NSString *exportFileSize;
@property (nonatomic, readonly) NSString *publishResolution;
@property (nonatomic, readonly) NSString *publishBitrate;
@property (nonatomic, readonly) NSString *publishFileSize;
@property (nonatomic, readonly) NSString *isReencodeString;
@property (nonatomic, retain) LMImageQualityTrackSceneEditInfo *editInfo;
@property (nonatomic, retain) NSNumber *contentTypeObjc;
@property (nonatomic, retain) NSNumber *exportContentTypeObjc;
@property (nonatomic, copy) NSArray *attachedInfos;
@property (nonatomic, retain) LMImageQualityImage *exportImageInfo;
@property (nonatomic, copy) NSString *downgradeReason;
@property (nonatomic, copy) NSDictionary *downgradeReasonInfo;
@property (nonatomic, copy) NSDictionary *lastEditAction;
@property (nonatomic) struct CGSize { double x0; double x1; } publishSizeAB;
@property (nonatomic) struct CGSize { double x0; double x1; } publishFromSize;
@property (nonatomic) struct CGSize { double x0; double x1; } publishSizeSet;
@property (nonatomic, retain) LMImageQualityImage *publishImageInfo;
@property (nonatomic, copy) NSString *exportImageType;
@property (nonatomic, retain) LMImageQualityVideo *exportVideoInfo;
@property (nonatomic, retain) LMImageQualityVideo *publishVideoInfo;
@property (nonatomic) double compileVideoVq;
@property (nonatomic, copy) NSString *coverHostId;
@property (nonatomic, retain) LMImageQualityImage *coverInfo;

- (void).cxx_destruct;
- (id)init;
- (void)updateValue:(id)a0 forKey:(id)a1;

@end
