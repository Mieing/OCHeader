@class NSString;

@interface TCSendStoryDic : TCAPIRequest

@property (retain, nonatomic) NSString *paramTitle;
@property (retain, nonatomic) NSString *paramSummary;
@property (retain, nonatomic) NSString *paramDescription;
@property (retain, nonatomic) NSString *paramPics;
@property (retain, nonatomic) NSString *paramAct;
@property (retain, nonatomic) NSString *paramShareUrl;

+ (id)dictionary;

- (void).cxx_destruct;
- (id)init;

@end
