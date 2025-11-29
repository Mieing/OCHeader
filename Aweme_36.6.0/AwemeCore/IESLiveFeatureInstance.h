@class NSString, NSDateFormatter, NSDictionary, NSNumber, NSMutableArray;

@interface IESLiveFeatureInstance : NSObject

@property (retain, nonatomic) NSDateFormatter *formatter;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterRoomId;
@property (copy, nonatomic) NSString *enterAuthorId;
@property (retain, nonatomic) NSNumber *roomType;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *userCount;
@property (retain, nonatomic) NSNumber *showTs;
@property (retain, nonatomic) NSNumber *showTms;
@property (retain, nonatomic) NSNumber *innerDuration;
@property (retain, nonatomic) NSNumber *outerDurationBeforeEnter;
@property (retain, nonatomic) NSMutableArray *interactArray;
@property (retain, nonatomic) NSNumber *likeCnt;
@property (retain, nonatomic) NSNumber *messageCnt;
@property (retain, nonatomic) NSNumber *giftCnt;
@property (retain, nonatomic) NSNumber *userLikeCnt;
@property (retain, nonatomic) NSNumber *userMessageCnt;
@property (retain, nonatomic) NSNumber *userGiftCnt;
@property (retain, nonatomic) NSNumber *userGiftMoneySum;
@property (retain, nonatomic) NSNumber *userClickProductCnt;
@property (retain, nonatomic) NSNumber *follow;
@property (retain, nonatomic) NSNumber *share;
@property (retain, nonatomic) NSNumber *dislike;
@property (retain, nonatomic) NSNumber *userReport;
@property (retain, nonatomic) NSNumber *har;
@property (retain, nonatomic) NSNumber *harRct;
@property (retain, nonatomic) NSNumber *ohr;
@property (retain, nonatomic) NSNumber *ohrRct;
@property (retain, nonatomic) NSNumber *ohrHabit;
@property (nonatomic) BOOL durationEnd;
@property (nonatomic) BOOL interactEnd;
@property (nonatomic) BOOL end;
@property (retain, nonatomic) NSNumber *allInnerDuration;
@property (retain, nonatomic) NSNumber *drawToNext;
@property (retain, nonatomic) NSDictionary *itemExplicitInfo;
@property (retain, nonatomic) NSString *targetsRecInfo;
@property (copy, nonatomic) NSNumber *isNoStream;
@property (copy, nonatomic) NSNumber *enterRoomDuration;

- (void)checkEnd;
- (void)sumInteractData;
- (void)addPointToInnerDuration:(id)a0;
- (void)addOuterDurationBeforeEnter:(id)a0;
- (void)addPointToInteractArray:(id)a0;
- (void)addItemExplicitInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
