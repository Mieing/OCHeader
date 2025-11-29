@class NSString, NSAttributedString;

@interface BrandProfileTopicInfo : NSObject

@property (nonatomic) BOOL isFirstLine;
@property (nonatomic) struct CGPoint { double x; double y; } topicButtonOrigin;
@property (nonatomic) struct CGSize { double width; double height; } topicButtonSize;
@property (retain, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSString *titleTruncatedStr;
@property (retain, nonatomic) NSString *descStr;
@property (retain, nonatomic) NSString *urlStr;
@property (nonatomic) unsigned long long tagID;
@property (retain, nonatomic) NSAttributedString *topicAttributedStr;
@property (nonatomic) unsigned long long row;
@property (nonatomic) unsigned long long column;

- (void).cxx_destruct;

@end
