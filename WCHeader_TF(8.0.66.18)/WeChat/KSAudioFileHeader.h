@class NSData;

@interface KSAudioFileHeader : NSObject

@property (nonatomic) unsigned long long pos;
@property (retain, nonatomic) NSData *headerData;

- (void).cxx_destruct;

@end
