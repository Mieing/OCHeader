@class NSString;

@interface IESLiveLyricRecognitionLayoutConfig : NSObject

@property (nonatomic) double lyricWidth;
@property (nonatomic) double lyricHeight;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) NSString *contentViewCreator;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) BOOL enableAIStage;

- (void).cxx_destruct;

@end
