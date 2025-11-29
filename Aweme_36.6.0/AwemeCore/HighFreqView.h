@class NSString;

@interface HighFreqView : GPBMessage

@property (copy, nonatomic) NSString *subType;
@property (nonatomic) BOOL hasSubType;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL hasScene;
@property (copy, nonatomic) NSString *view;
@property (nonatomic) BOOL hasView;
@property (copy, nonatomic) NSString *viewTree;
@property (nonatomic) BOOL hasViewTree;
@property (nonatomic) double rate;
@property (nonatomic) BOOL hasRate;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) int count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) double createdTime;
@property (nonatomic) BOOL hasCreatedTime;

+ (id)descriptor;

@end
