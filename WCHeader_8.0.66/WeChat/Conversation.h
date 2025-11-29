@class NSString, NSNumber;

@interface Conversation : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *lastMsgDigest;
@property (retain, nonatomic) NSNumber *updateTime;
@property (retain, nonatomic) NSNumber *flag;
@property (retain, nonatomic) NSNumber *isPlaceTop;
@property (retain, nonatomic) NSNumber *createTime;

+ (id)makeWithUsername:(id)a0 nickname:(id)a1 lastMsgDigest:(id)a2 updateTime:(id)a3 flag:(id)a4 isPlaceTop:(id)a5 createTime:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
