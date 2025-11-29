@class NSArray, NSAttributedString, UIColor;

@interface AFDUnreadMentionTagModel : NSObject

@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL needArrowIcon;

- (void).cxx_destruct;

@end
