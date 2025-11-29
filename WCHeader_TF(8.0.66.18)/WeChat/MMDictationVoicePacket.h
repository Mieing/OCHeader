@class NSData, NSString;

@interface MMDictationVoicePacket : NSObject

@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int eventId;
@property (copy, nonatomic) NSString *voiceId;

- (void).cxx_destruct;

@end
