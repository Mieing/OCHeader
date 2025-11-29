@class NSString;

@interface TCAddShareDic : TCAPIRequest

@property (retain, nonatomic) NSString *paramTitle;
@property (retain, nonatomic) NSString *paramUrl;
@property (retain, nonatomic) NSString *paramComment;
@property (retain, nonatomic) NSString *paramSummary;
@property (retain, nonatomic) NSString *paramImages;
@property (retain, nonatomic) NSString *paramType;
@property (retain, nonatomic) NSString *paramPlayurl;
@property (retain, nonatomic) NSString *paramSite;
@property (retain, nonatomic) NSString *paramFromurl;
@property (retain, nonatomic) NSString *paramNswb;

+ (id)dictionary;

- (void).cxx_destruct;

@end
