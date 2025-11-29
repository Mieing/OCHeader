@class NSArray, IESMMFaceAttributeDetectResultData, NSDictionary;
@protocol ACCAIEmojiStyleModelProtocol;

@interface AWEStudioIMAIEmojiDataModel : NSObject

@property (copy, nonatomic) NSArray *AIEmojiStyles;
@property (retain, nonatomic) id<ACCAIEmojiStyleModelProtocol> initialStyle;
@property (retain, nonatomic) id<ACCAIEmojiStyleModelProtocol> selectedStyle;
@property (retain, nonatomic) IESMMFaceAttributeDetectResultData *detectData;
@property (nonatomic) BOOL didCurrentStyleReachLimit;
@property (nonatomic) long long currentCameraPosition;
@property (copy, nonatomic) id /* block */ didSelectAIEmojiStyleBlock;
@property (copy, nonatomic) NSDictionary *aiEmojiTrackParam;
@property (nonatomic) BOOL isRetake;

- (void).cxx_destruct;

@end
