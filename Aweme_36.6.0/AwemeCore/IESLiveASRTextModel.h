@class NSString, NSMutableArray, NSNumber;

@interface IESLiveASRTextModel : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long meanType;
@property (copy, nonatomic) NSString *textClass;
@property (copy, nonatomic) NSString *giftNickName;
@property (copy, nonatomic) NSString *giftName;
@property (retain, nonatomic) NSMutableArray *giftNameCandidateQueue;
@property (copy, nonatomic) NSNumber *giftId;
@property (retain, nonatomic) NSMutableArray *giftIdCandidateQueue;
@property (copy, nonatomic) NSString *costTime;

- (id)initWithText:(id)a0 textClass:(id)a1;
- (void).cxx_destruct;

@end
