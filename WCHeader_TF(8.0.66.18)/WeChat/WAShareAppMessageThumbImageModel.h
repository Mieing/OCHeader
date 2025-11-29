@class NSData, NSString;

@interface WAShareAppMessageThumbImageModel : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSData *localImageData;
@property (retain, nonatomic) NSData *originImageData;
@property (copy, nonatomic) NSString *webImageURLString;
@property (nonatomic) BOOL shouldCrop;
@property (nonatomic) struct CGSize { double width; double height; } cropSize;
@property (nonatomic) BOOL useOriginImageForSignature;

- (void).cxx_destruct;

@end
