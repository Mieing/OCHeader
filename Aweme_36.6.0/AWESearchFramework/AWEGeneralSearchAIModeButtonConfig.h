@class NSURL, NSString;

@interface AWEGeneralSearchAIModeButtonConfig : NSObject

@property (retain, nonatomic) NSURL *AIModeURL;
@property (retain, nonatomic) NSString *AIModeText;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *darkTextColor;

- (void).cxx_destruct;

@end
