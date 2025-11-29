@class NSString;

@interface BTRecoFlowMsgOpenParams : MMObject

@property (nonatomic) BOOL isOpenAggregationUrl;
@property (retain, nonatomic) NSString *aggregationUrl;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *digest;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) BOOL hasItemShowType;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSString *finderFeedXml;

- (BOOL)isValid;
- (BOOL)isOpenAggregationValid;
- (id)genWithRecommendItemMsg:(id)a0;
- (void).cxx_destruct;

@end
