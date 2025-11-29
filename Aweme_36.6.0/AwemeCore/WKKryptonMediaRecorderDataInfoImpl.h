@class NSString;

@interface WKKryptonMediaRecorderDataInfoImpl : NSObject <WKKryptonMediaRecorderData>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned long long size;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
