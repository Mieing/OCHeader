@class NSString, NSNumber, NSArray;

@interface MassSendCardMsg : NSObject

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSNumber *orderId;
@property (retain, nonatomic) NSNumber *msgId;
@property (retain, nonatomic) NSNumber *svrId;
@property (retain, nonatomic) NSNumber *isExposed;
@property (retain, nonatomic) NSNumber *isValidExposed;
@property (retain, nonatomic) NSNumber *isExpand;
@property (retain, nonatomic) NSNumber *isPlaceTop;
@property (retain, nonatomic) NSNumber *createTime;
@property (copy, nonatomic) NSString *rankSessionId;
@property (retain, nonatomic) NSNumber *isBigPic;
@property (copy, nonatomic) NSArray *items;

+ (id)makeWithUserName:(id)a0 nickName:(id)a1 orderId:(id)a2 msgId:(id)a3 svrId:(id)a4 isExposed:(id)a5 isValidExposed:(id)a6 isExpand:(id)a7 isPlaceTop:(id)a8 createTime:(id)a9 rankSessionId:(id)a10 isBigPic:(id)a11 items:(id)a12;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
