@class NSString, WCMultiLanguageItem;

@interface WCAdDislikeReason : NSObject <NSCoding>

@property (retain, nonatomic) NSString *reasonId;
@property (retain, nonatomic) WCMultiLanguageItem *wording;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
