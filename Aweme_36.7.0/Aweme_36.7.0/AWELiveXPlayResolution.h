@class NSString;
@protocol XPlayResolution;

@interface AWELiveXPlayResolution : NSObject <IESLiveXPlayResolutionProtocol>

@property (retain, nonatomic) id<XPlayResolution> originalResolution;
@property (nonatomic) long long index;
@property (nonatomic) long long fps;
@property (nonatomic) long long maxKBps;
@property (nonatomic) long long resolutionType;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPlayResolution:(id)a0;
- (void).cxx_destruct;

@end
