@class NSString;

@interface MMFinderLiveBarrageDataItem : NSObject

@property (nonatomic) unsigned long long barrageId;
@property (nonatomic) unsigned int type;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *msg;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long relationType;
@property (readonly, nonatomic) BOOL isFromStranger;
@property (nonatomic) unsigned int deleteFlag;

+ (id)createBarrageDataItemFromComment:(id)a0;
+ (BOOL)isCommentValid:(id)a0;

- (id)uniqueId;
- (id)uniqueLogId;
- (void).cxx_destruct;

@end
