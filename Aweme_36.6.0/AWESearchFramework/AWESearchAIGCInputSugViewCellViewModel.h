@class AWESearchAIGCSugData, NSAttributedString;

@interface AWESearchAIGCInputSugViewCellViewModel : NSObject

@property (copy, nonatomic) NSAttributedString *titleAttributedString;
@property (retain, nonatomic) AWESearchAIGCSugData *sugData;
@property (nonatomic) long long sugModelIndex;
@property (nonatomic) BOOL isLast;
@property (nonatomic) BOOL isFirst;
@property (copy, nonatomic) id /* block */ selectSugIcon;

- (void).cxx_destruct;
- (double)cellHeight;

@end
