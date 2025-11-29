@class NSString, NSNumber;

@interface MassSendCardMsgItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlId;
@property (retain, nonatomic) NSNumber *time;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *cover_1_1;
@property (copy, nonatomic) NSString *digest;
@property (retain, nonatomic) NSNumber *itemShowType;
@property (retain, nonatomic) NSNumber *play_length;
@property (copy, nonatomic) NSString *play_url;
@property (copy, nonatomic) NSString *player;
@property (copy, nonatomic) NSString *vid;
@property (retain, nonatomic) NSNumber *picNum;
@property (retain, nonatomic) NSNumber *videoWidth;
@property (retain, nonatomic) NSNumber *videoHeight;
@property (retain, nonatomic) NSNumber *isPaySubscribe;

+ (id)makeWithTitle:(id)a0 url:(id)a1 urlId:(id)a2 time:(id)a3 cover:(id)a4 cover_1_1:(id)a5 digest:(id)a6 itemShowType:(id)a7 play_length:(id)a8 play_url:(id)a9 player:(id)a10 vid:(id)a11 picNum:(id)a12 videoWidth:(id)a13 videoHeight:(id)a14 isPaySubscribe:(id)a15;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
