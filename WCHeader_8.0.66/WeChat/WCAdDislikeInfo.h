@class NSArray, WCMultiLanguageItem;

@interface WCAdDislikeInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *reasonList;
@property (retain, nonatomic) WCMultiLanguageItem *title;
@property (nonatomic) BOOL forbidClick;
@property (retain, nonatomic) WCMultiLanguageItem *forbidClickReason;
@property (nonatomic) BOOL isPersonalizedAdClose;
@property (nonatomic) BOOL useNewStyle;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)validReasonCount;
- (id)validReasonList;
- (void).cxx_destruct;

@end
