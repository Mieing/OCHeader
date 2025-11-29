@class NSString, NSDictionary, AWEURLModel;

@interface AWEHPSearchBubbleEntranceViewConfig : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *authorId;
@property (retain, nonatomic) NSDictionary *logPb;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (nonatomic) int showStyle;

- (void).cxx_destruct;

@end
