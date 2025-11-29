@class NSString;

@interface WCPayBindCardRecommendNativeInfo : NSObject

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *btn_text;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *small_title;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
