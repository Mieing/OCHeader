@class NSString;

@interface AWEECShoppingAIGuideMessageSingleTextViewModel : AWEECShoppingAIGuideMessageSingleViewModel

@property (nonatomic) BOOL didNoticeTextReceiveEnd;
@property (retain, nonatomic) NSString *searchWordText;
@property (nonatomic) BOOL skipTypeWriter;
@property (nonatomic) BOOL textSectionDataCompleted;
@property (retain, nonatomic) NSString *textCardID;
@property (nonatomic) double actuallyHeight;
@property (nonatomic) BOOL disableUseCachedHeight;

+ (id)generateViewModelWithCardInfo:(id)a0 preferModel:(id)a1;

- (id)initWithMsgModel:(id)a0;
- (double)textCellAdditionPaddingY;
- (double)singleMsgHeight;
- (double)singleMsgHeightWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
