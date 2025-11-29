@class NSString, WCMultiLanguageItem;

@interface WCAdFeedbackItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) WCMultiLanguageItem *wording;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
