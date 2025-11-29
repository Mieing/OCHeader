@class NSArray, NSString, MJVoiceInputRecognizer;

@interface MJVoiceInputEntity : NSObject

@property (retain, nonatomic) NSArray *captions;
@property (nonatomic) unsigned int captionsIndex;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MJVoiceInputRecognizer *recognizer;
@property (readonly, nonatomic) unsigned long long state;
@property (nonatomic) BOOL isCancelled;

- (id)initWithIdentifier:(id)a0 recognizer:(id)a1;
- (void)setCaptions:(id)a0 withIndex:(unsigned int)a1;
- (void).cxx_destruct;

@end
