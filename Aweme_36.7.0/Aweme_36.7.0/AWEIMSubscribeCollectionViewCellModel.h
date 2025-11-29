@class NSString, AWEIMSubscribeCardModel, AWEURLModel;

@interface AWEIMSubscribeCollectionViewCellModel : NSObject <AWEListDiffable>

@property (nonatomic) long long cardId;
@property (nonatomic) long long articleId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;
@property (nonatomic) long long receiveTime;
@property (retain, nonatomic) AWEURLModel *coverageURLModel;
@property (copy, nonatomic) NSString *coverTitle;
@property (retain, nonatomic) AWEIMSubscribeCardModel *model;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long readCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellModelWithSubscribeCardModel:(id)a0;

@end
