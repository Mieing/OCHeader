@class LMImageQualityImage, LMImageQualityVideo, NSString, NSDictionary;

@interface CKCameraOutput : NSObject {
    void /* unknown type, empty encoding */ runtimeDict;
    void /* unknown type, empty encoding */ effectInfo;
    void /* unknown type, empty encoding */ shootVEInfo;
    void /* unknown type, empty encoding */ contentType;
    void /* unknown type, empty encoding */ exportImageInfo;
    void /* function */ downgradeReason;
    void /* function */ downgradeReasonInfo;
}

@property (nonatomic) struct CGSize { double x0; double x1; } ab;
@property (nonatomic) struct CGSize { double x0; double x1; } set;
@property (nonatomic) struct CGSize { double x0; double x1; } runtime;
@property (nonatomic, retain) LMImageQualityImage *originImageInfo;
@property (nonatomic, retain) LMImageQualityVideo *originalVideoInfo;
@property (nonatomic, copy) NSString *downgradeReason;
@property (nonatomic, copy) NSDictionary *downgradeReasonInfo;

- (id)trackDictWithReportMode:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
