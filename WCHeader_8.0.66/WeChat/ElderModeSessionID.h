@class NSString;

@interface ElderModeSessionID : NSObject

@property (retain, nonatomic) NSString *data;

+ (id)sharedInstance;

- (id)getElderModeSessionID;
- (void)clearElderModeSessionID;
- (void).cxx_destruct;

@end
