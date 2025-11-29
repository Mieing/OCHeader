@class NSString;

@interface XPlayResolutionConfig : NSObject <XPlayResolutionConfig>

@property (nonatomic) long long bitRate;
@property (nonatomic) long long frameRate;
@property (copy, nonatomic) NSString *resolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
