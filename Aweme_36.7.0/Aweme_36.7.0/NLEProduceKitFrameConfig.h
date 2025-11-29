@class NSString;

@interface NLEProduceKitFrameConfig : NSObject

@property (nonatomic) BOOL withEffect;
@property (nonatomic) struct CGSize { double width; double height; } resultSize;
@property (nonatomic) unsigned long long captureType;
@property (nonatomic) unsigned long long resultType;
@property (retain, nonatomic) NSString *frameCacheDirectory;
@property (nonatomic) BOOL withHighlightScore;

- (void).cxx_destruct;

@end
