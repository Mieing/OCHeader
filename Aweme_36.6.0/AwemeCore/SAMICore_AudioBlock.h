@class NSObject;

@interface SAMICore_AudioBlock : NSObject

@property (nonatomic) long long dataType;
@property (nonatomic) unsigned int numberAudioData;
@property (retain, nonatomic) id audioData;
@property (retain, nonatomic) NSObject *userContext;

- (void)dealloc;

@end
