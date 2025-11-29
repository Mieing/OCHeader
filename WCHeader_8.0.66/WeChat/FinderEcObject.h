@class NSString, FinderWxAppInfo, FinderJumpInfo;

@interface FinderEcObject : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *shopName;
@property (retain, nonatomic) FinderWxAppInfo *shopWxaInfo;
@property (retain, nonatomic) NSString *shopHeadImg;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int payTime;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *statusDesc;
@property (retain, nonatomic) NSString *objectTitle;
@property (retain, nonatomic) NSString *objectSubTitle;
@property (retain, nonatomic) NSString *objectHeadImg;
@property (nonatomic) unsigned long long spuId;

+ (void)initialize;

@end
