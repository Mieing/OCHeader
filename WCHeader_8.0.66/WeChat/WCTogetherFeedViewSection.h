@class NSString, NSMutableArray;

@interface WCTogetherFeedViewSection : NSObject

@property (readonly, copy, nonatomic) Class headerViewClass;
@property (readonly, copy, nonatomic) Class footerViewClass;
@property (copy, nonatomic) NSString *yearText;
@property (copy, nonatomic) NSString *dayText;
@property (copy, nonatomic) NSString *dateText;
@property (nonatomic) BOOL showsFooterSeparatorLine;
@property (retain, nonatomic) NSMutableArray *viewItems;

- (id)init;
- (void).cxx_destruct;

@end
