@class NSString, AWEGeneralSearchModel, NSNumber, AWEUserModel;

@interface AWESearchTopicCommentModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *commentCountTotal;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) NSString *channelObjId;
@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSString *hotSpotID;
@property (retain, nonatomic) NSString *topicID;
@property (retain, nonatomic) NSString *placeHolder;
@property (retain, nonatomic) AWEGeneralSearchModel *dataModel;
@property (nonatomic) BOOL isSecondLevelPanel;
@property (nonatomic) BOOL isUGCTopic;

- (void).cxx_destruct;

@end
