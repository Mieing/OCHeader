@class NSString;

@interface MJFaceRecognitionInfo : NSObject <PBCoding, NSCopying>

@property (nonatomic) unsigned long long isEnable;
@property (nonatomic) unsigned long long minFaceFramePercent;
@property (copy, nonatomic) NSString *captureBlockTipsWording;
@property (copy, nonatomic) NSString *photoBlockTipsWording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isEnable;
+ (void)PBArrayAdd_minFaceFramePercent;
+ (void)PBArrayAdd_captureBlockTipsWording;
+ (void)PBArrayAdd_photoBlockTipsWording;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithFaceRecognitionInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
