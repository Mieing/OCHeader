@class NSNumber, NSString;

@interface BizShareInfo : NSObject

@property (retain, nonatomic) NSNumber *shareType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imgUrl;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSNumber *itemShowType;
@property (copy, nonatomic) NSString *srcUsername;
@property (copy, nonatomic) NSString *displayUsername;
@property (copy, nonatomic) NSString *msgSvrId;
@property (copy, nonatomic) NSString *msgId;

+ (id)makeWithShareType:(id)a0 url:(id)a1 title:(id)a2 imgUrl:(id)a3 desc:(id)a4 itemShowType:(id)a5 srcUsername:(id)a6 displayUsername:(id)a7 msgSvrId:(id)a8 msgId:(id)a9;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
