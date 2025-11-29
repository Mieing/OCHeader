@class NSString;

@interface MJCaptionReportRequestInfo : NSObject

@property (readonly, nonatomic) NSString *voiceID;
@property (readonly, nonatomic) unsigned long long audiofrmat;
@property (readonly, nonatomic) unsigned long long totalDataLength;

- (id)initWithVoiceID:(id)a0 audioFormat:(unsigned long long)a1 totalDataLength:(unsigned long long)a2;
- (id)toRequestInfoPB;
- (id)description;
- (void).cxx_destruct;

@end
