@class NSString, IESEffectModel, NSArray;

@interface ACCTextReaderPickerResult : NSObject

@property (copy, nonatomic) IESEffectModel *effectModel;
@property (copy, nonatomic) NSString *audioFilePath;
@property (copy, nonatomic) NSString *speakerID;
@property (copy, nonatomic) NSString *speakerName;
@property (copy, nonatomic) NSString *toneTab;
@property (copy, nonatomic) NSArray *words;

- (id)initWithModel:(id)a0 filePath:(id)a1 speakerId:(id)a2 speakerName:(id)a3 toneTab:(id)a4 words:(id)a5;
- (void).cxx_destruct;

@end
