@class MMLiveCommentDataItem, NSString, NSArray, FinderWindowProductInfo, FinderLiveContact, FinderLiveBoxId;

@interface MMFinderLiveCommentPostInfo : NSObject

@property (retain, nonatomic) NSString *postContent;
@property (retain, nonatomic) FinderLiveBoxId *boxIdObj;
@property (nonatomic) unsigned long long postType;
@property (nonatomic) unsigned long long forwardType;
@property (nonatomic) unsigned int floatMsgType;
@property (retain, nonatomic) NSString *floatMsgProductId;
@property (retain, nonatomic) NSArray *toUserList;
@property (retain, nonatomic) MMLiveCommentDataItem *selectCommentItem;
@property (retain, nonatomic) FinderWindowProductInfo *questionProductInfo;
@property (retain, nonatomic) FinderLiveContact *fromUser;

- (void).cxx_destruct;

@end
