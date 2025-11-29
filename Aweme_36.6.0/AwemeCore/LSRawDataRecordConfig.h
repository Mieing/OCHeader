@class NSURL;

@interface LSRawDataRecordConfig : NSObject

@property (retain, nonatomic) NSURL *outputUrl;
@property (nonatomic) unsigned int pixelformat;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) long long dumpFrames;
@property (nonatomic) long long sourceType;

- (id)defaultOutputURL;
- (void).cxx_destruct;
- (id)init;

@end
