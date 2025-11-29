@class NSString;

@interface SAMICore_FirstWakeupInfo : NSObject

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *sn;
@property (retain, nonatomic) NSString *group_id;
@property (retain, nonatomic) NSString *keywords;
@property (retain, nonatomic) NSString *did;
@property (retain, nonatomic) NSString *engine_version;
@property (nonatomic) int type;
@property (nonatomic) int background;
@property (nonatomic) float confidence;
@property (nonatomic) float threshold;
@property (nonatomic) float traceback;
@property (nonatomic) float time;
@property (nonatomic) float fallback_threshold;

- (void)dealloc;

@end
