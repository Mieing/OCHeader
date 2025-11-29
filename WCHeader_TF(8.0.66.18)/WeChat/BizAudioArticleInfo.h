@class NSNumber, NSString;

@interface BizAudioArticleInfo : NSObject

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

+ (id)makeWithMsgId:(id)a0 svrId:(id)a1 pos:(id)a2 posInCard:(id)a3 openScene:(id)a4 subScene:(id)a5 url:(id)a6 itemShowType:(id)a7 userName:(id)a8 nickName:(id)a9 title:(id)a10 coverUrl:(id)a11 bizFinderEnterId:(id)a12 rankSessionId:(id)a13 msgLocalId:(id)a14 bizSessionId:(id)a15 jumpPaths:(id)a16 hideShareMenu:(id)a17;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
