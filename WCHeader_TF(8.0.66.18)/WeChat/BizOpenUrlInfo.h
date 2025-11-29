@class NSNumber, NSString;

@interface BizOpenUrlInfo : NSObject

@property (retain, nonatomic) NSNumber *msgId;
@property (retain, nonatomic) NSNumber *svrId;
@property (retain, nonatomic) NSNumber *pos;
@property (retain, nonatomic) NSNumber *posInCard;
@property (retain, nonatomic) NSNumber *openScene;
@property (retain, nonatomic) NSNumber *subScene;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *itemShowType;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *bizFinderEnterId;
@property (copy, nonatomic) NSString *rankSessionId;
@property (retain, nonatomic) NSNumber *msgLocalId;
@property (retain, nonatomic) NSNumber *bizSessionId;
@property (copy, nonatomic) NSString *jumpPaths;
@property (retain, nonatomic) NSNumber *hideShareMenu;

+ (id)fromBizArticleInfo:(id)a0;

- (void).cxx_destruct;

@end
