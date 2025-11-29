@class NSString, NSNumber;

@interface BizImagePreviewActionReplyInfo : NSObject

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *time;
@property (copy, nonatomic) NSString *replyImgUrl;

+ (id)makeWithContent:(id)a0 time:(id)a1 replyImgUrl:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
