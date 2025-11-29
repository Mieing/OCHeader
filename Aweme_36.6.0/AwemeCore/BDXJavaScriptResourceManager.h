@class NSString;

@interface BDXJavaScriptResourceManager : NSObject

@property (readonly, copy, nonatomic) NSString *stopAudioScript;
@property (readonly, copy, nonatomic) NSString *observeTitleScript;
@property (readonly, copy, nonatomic) NSString *registerObserveTitleScript;
@property (readonly, copy, nonatomic) NSString *pauseAVScript;
@property (readonly, copy, nonatomic) NSString *disableImgCalloutScript;

+ (id)sharedInstance;

@end
