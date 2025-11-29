@class NSString;

@interface MediaUtilsVideo : NSObject {
    void /* function */ encodeType;
    void /* unknown type, empty encoding */ filePathObjc;
    void /* unknown type, empty encoding */ colorspace;
    void /* unknown type, empty encoding */ colorMatrix;
    void /* unknown type, empty encoding */ bitsDepth;
    void /* unknown type, empty encoding */ transFunction;
    void /* unknown type, empty encoding */ hdr;
    void /* unknown type, empty encoding */ isValid;
}

@property (nonatomic) struct CGSize { double x0; double x1; } resolution;
@property (nonatomic) long long fileSize;
@property (nonatomic) float frameRate;
@property (nonatomic) float bitrate;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *encodeType;
@property (nonatomic) double videoDuration;
@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, readonly) NSString *fullPath;

+ (id)getImageQualityInfo:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
