@class JsApiSourceInfo, NSString, WCFinderTopicInfo, NSData, FinderClientStatus, FinderNextObjectInfo, WCFinderSectionInfo;

@interface WCFinderTopicListParamsModel : NSObject

@property (nonatomic) int topicType;
@property (copy, nonatomic) NSString *topicStr;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *refObjectid;
@property (nonatomic) int tabType;
@property (nonatomic) int innerTabType;
@property (nonatomic) int fromType;
@property (retain, nonatomic) WCFinderTopicInfo *poiTopicRecommend;
@property (retain, nonatomic) WCFinderSectionInfo *sectionInfo;
@property (retain, nonatomic) FinderClientStatus *clientStatus;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSData *topicBuffer;
@property (copy, nonatomic) NSString *encryptedTopicID;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSData *byPassInfo;
@property (nonatomic) int rollDirection;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) int mediaTabType;
@property (nonatomic) int prefetchType;
@property (retain, nonatomic) FinderNextObjectInfo *nextObjectInfo;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;

+ (id)genFetchTabDataArrayByTopicType:(int)a0 refObjectid:(id)a1 innerTabType:(int)a2 topicId:(unsigned long long)a3 commentScene:(int)a4 encryptedTopicID:(id)a5 byPassInfo:(id)a6 rollDirection:(int)a7 lastBuffer:(id)a8;

- (id)printErrMsg;
- (void).cxx_destruct;

@end
