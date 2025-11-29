@interface VoicePrintQueueItem : NSObject

@property (nonatomic) unsigned int voiceId;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int endflag;
@property (nonatomic) unsigned int trycount;

@end
