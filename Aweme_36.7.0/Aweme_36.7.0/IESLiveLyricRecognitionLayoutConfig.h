@class NSString, NSNumber;

@interface IESLiveLyricRecognitionLayoutConfig : NSObject

@property (nonatomic) double lyricWidth;
@property (nonatomic) double lyricHeight;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) NSString *contentViewCreator;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSNumber *labelTextFontSize;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) BOOL enableAIStage;
@property (retain, nonatomic) NSNumber *scale;

- (void).cxx_destruct;

@end
