@class NSString, NSMutableDictionary;

@interface AWELongVideoTimeRecorder : NSObject <AWELongVideoTimeRecorderProtocol>

@property (retain, nonatomic) NSMutableDictionary *recoderMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)tikPage:(id)a0;
- (long long)durationForPage:(id)a0;
- (void)resetPage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
