@class NSString;

@interface LMImageQualityImage : NSObject {
    void /* function */ colorspace;
    void /* function */ encodeType;
    void /* unknown type, empty encoding */ filePathObjc;
    void /* unknown type, empty encoding */ isValid;
    void /* function */ isReencode;
}

@property (nonatomic) struct CGSize { double x0; double x1; } resolution;
@property (nonatomic) long long fileSize;
@property (nonatomic, copy) NSString *colorspace;
@property (nonatomic) BOOL hdr;
@property (nonatomic, copy) NSString *encodeType;
@property (nonatomic) long long bitsDepth;
@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, copy) NSString *isReencode;

- (id)getFullPath;
- (void).cxx_destruct;
- (id)init;

@end
