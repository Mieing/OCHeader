@class NSString, NSArray, AWEECOMIMQuestionItemCardModel;

@interface AWEECOMIMSelectQuestionMsgModel : AWEECOMIMBaseMsgModel

@property (copy, nonatomic) NSString *questionTitle;
@property (copy, nonatomic) NSArray *questionList;
@property (retain, nonatomic) AWEECOMIMQuestionItemCardModel *questionModel;
@property (nonatomic) double questionTotalHeight;

+ (Class)cellClass;

- (void)reBulildCellFullContentHeight;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
