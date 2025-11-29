@class NSString, NSArray, AWEECOMIMFootDescMsgSourceLabelModel;

@interface AWEECOMIMFootDescSourceUIModel : NSObject

@property (nonatomic) BOOL shouldShow;
@property (copy, nonatomic) NSString *sourceText;
@property (copy, nonatomic) NSArray *placeHolderList;
@property (retain, nonatomic) AWEECOMIMFootDescMsgSourceLabelModel *sourceLabelModel;
@property (nonatomic) BOOL cardHeaderEnableFootDesc;
@property (nonatomic) BOOL disableByAggregation;
@property (nonatomic) BOOL disableByFold;

- (void).cxx_destruct;

@end
