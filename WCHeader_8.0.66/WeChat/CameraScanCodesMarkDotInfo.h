@class NSRecursiveLock, NSString, NSData, UIImage;

@interface CameraScanCodesMarkDotInfo : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSData *codeRawData;
@property (retain, nonatomic) NSString *codeDecodedString;
@property (retain, nonatomic) NSString *codeCharSet;
@property (retain, nonatomic) NSString *codeTypeName;
@property (nonatomic) unsigned int codeVersion;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long yunyingType;
@property (retain, nonatomic) UIImage *oriImage;
@property (nonatomic) struct __CVBuffer { } *imageBuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

+ (id)copy:(id)a0 newCenter:(struct CGPoint { double x0; double x1; })a1;

- (id)init;
- (void)releaseImageBuffer;
- (void)dealloc;
- (void).cxx_destruct;

@end
