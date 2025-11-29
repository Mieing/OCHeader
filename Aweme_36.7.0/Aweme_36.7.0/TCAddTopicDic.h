@class NSString;

@interface TCAddTopicDic : TCAPIRequest

@property (retain, nonatomic) NSString *paramRichtype;
@property (retain, nonatomic) NSString *paramRichval;
@property (retain, nonatomic) NSString *paramCon;
@property (retain, nonatomic) NSString *paramLbs_nm;
@property (retain, nonatomic) NSString *paramLbs_x;
@property (retain, nonatomic) NSString *paramLbs_y;
@property (retain, nonatomic) NSString *paramThirdSource;

+ (id)dictionary;

- (void).cxx_destruct;

@end
