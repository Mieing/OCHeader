@class NSMutableAttributedString, NSMutableArray;

@interface WCFinderHighlightedInfoModel : NSObject

@property (retain, nonatomic) NSMutableAttributedString *attriStr;
@property (retain, nonatomic) NSMutableArray *topicRangeArray;
@property (retain, nonatomic) NSMutableArray *mentionArray;
@property (retain, nonatomic) NSMutableArray *selectBkArray;
@property (retain, nonatomic) NSMutableArray *clearBkArray;
@property (retain, nonatomic) NSMutableArray *invalidCharacterArray;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
