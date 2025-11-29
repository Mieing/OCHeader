@class NSMutableArray, NSMutableAttributedString, AWEPlayVideoTranscribeResponseModel;

@interface AWEPlayAiToTextVideoTranscribeModel : NSObject

@property (retain, nonatomic) AWEPlayVideoTranscribeResponseModel *responeseModel;
@property (retain, nonatomic) NSMutableAttributedString *text;
@property (retain, nonatomic) NSMutableArray *videoParagraphs;
@property (retain, nonatomic) NSMutableArray *videoSentences;
@property (retain, nonatomic) NSMutableArray *searchWordInfos;
@property (nonatomic) int paragraphsCount;
@property (nonatomic) int sentenceCount;
@property (copy, nonatomic) id /* block */ showLogBlk;

+ (id)AiToTextVideoTranscribeModelForResponseModel:(id)a0 withShowLogBlk:(id /* block */)a1;

- (double)getLineHeight;
- (void)addParagraphStyleToParagraphs:(id)a0;
- (void)addAttributedToSentence:(id)a0;
- (void)addAttachmentToSentence:(id)a0 sentence:(id)a1;
- (void)setUp;
- (void).cxx_destruct;

@end
