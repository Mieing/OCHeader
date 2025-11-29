@class NSString, NSNumber, NSDictionary;

@interface IESLiveOuterFeatureInstance : NSObject

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSNumber *roomType;
@property (nonatomic) double outerShowTime;
@property (nonatomic) double outerShowTimeMs;
@property (retain, nonatomic) NSNumber *outerDuration;
@property (retain, nonatomic) NSNumber *outerDurationBeforeEnter;
@property (retain, nonatomic) NSNumber *follow;
@property (retain, nonatomic) NSNumber *dislike;
@property (retain, nonatomic) NSNumber *userReport;
@property (nonatomic) long long downLoadSpeed;
@property (retain, nonatomic) NSNumber *enterRoomDuration;
@property (retain, nonatomic) NSDictionary *itemExplicitInfo;

- (void)addOuterDurationBeforeEnter:(id)a0;
- (void)addItemExplicitInfo:(id)a0;
- (void)addOuterDuration:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
