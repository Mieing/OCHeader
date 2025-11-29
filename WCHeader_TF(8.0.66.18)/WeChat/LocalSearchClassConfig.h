@class NSMutableArray, LSTargetGenerator;

@interface LocalSearchClassConfig : NSObject

@property (nonatomic) Class objClass;
@property (retain, nonatomic) LSTargetGenerator *nsKeyGenerator;
@property (retain, nonatomic) NSMutableArray *arrMatchConfig;

+ (id)makeDefaultClassConfig:(Class)a0;
+ (id)makeDefaultConfigOfContact;
+ (id)makeDefaultConfigOfAddressBookFriend;
+ (id)makeDefaultConfigOfMailContact;
+ (id)makeDefaultConfigOfFTSFeatureItem;
+ (id)makeDefaultConfigOfMinimizeTasksItem;

- (void).cxx_destruct;

@end
