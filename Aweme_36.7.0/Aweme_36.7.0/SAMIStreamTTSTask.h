@class NSString, SAMIStreamTTSVoiceInfo;

@interface SAMIStreamTTSTask : NSObject

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) SAMIStreamTTSVoiceInfo *type;
@property (nonatomic) long long taskType;
@property (nonatomic) long long textCount;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL useSamiSliceText;

- (id)initWithTexts:(id)a0 type:(id)a1 taskType:(long long)a2 mode:(long long)a3 useSamiSliceText:(BOOL)a4;
- (void).cxx_destruct;

@end
