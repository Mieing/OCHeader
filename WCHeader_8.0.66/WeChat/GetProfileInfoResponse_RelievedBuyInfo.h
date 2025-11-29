@class NSString, NSMutableArray;

@interface GetProfileInfoResponse_RelievedBuyInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showFlag;
@property (retain, nonatomic) NSMutableArray *subInfo;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *clickWording;
@property (retain, nonatomic) NSString *clickUrl;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned int iconWidth;
@property (nonatomic) unsigned int iconHeight;
@property (retain, nonatomic) NSString *iconDesc;
@property (retain, nonatomic) NSString *iconDescColor;
@property (retain, nonatomic) NSString *bottomSheetIconUrl;
@property (nonatomic) unsigned int bottomSheetIconWidth;
@property (nonatomic) unsigned int bottomSheetIconHeight;
@property (retain, nonatomic) NSString *bottomSheetIconDesc;
@property (retain, nonatomic) NSString *bottomSheetIconDescColor;

+ (void)initialize;

- (id)attrDescWithButtonClickAction:(id /* block */)a0;

@end
