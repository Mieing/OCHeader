@class NSData, NSString, NSArray;

@interface ACCLVImageTemplateFragment : ACCLVTemplateFragment <LVTemplateImageFragment>

@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) NSString *cartoonFilePath;
@property (nonatomic) BOOL isCartoon;
@property (nonatomic) unsigned long long cartoonOutputType;
@property (copy, nonatomic) NSString *nleSlotID;
@property (copy, nonatomic) NSString *payloadID;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } sourceTimeRange;
@property (copy, nonatomic) NSArray *cropPoints;
@property (nonatomic) struct CGSize { double x0; double x1; } videoSzie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
