@interface BraceletRankUtils : NSObject

+ (id)generateBrandIcon:(id)a0 color:(id)a1;
+ (double)calculateSportViewHeightWithSportRecords:(id)a0 sportGoals:(id)a1;
+ (id)parseJSONDataFromRecord:(id)a0;
+ (id)categoryRecordByAppId:(id)a0;
+ (id)filterSportRecord:(id)a0;
+ (id)filterSportGoal:(id)a0;

- (id)getImageView:(id)a0 Rank:(unsigned int)a1 Steps:(unsigned int)a2;
- (id)generateShareImage:(id)a0 Rank:(unsigned int)a1 Steps:(unsigned int)a2;
- (id)generateUploadTaskByImage:(id)a0;
- (id)generateShareFriendMessageByImage:(id)a0;

@end
