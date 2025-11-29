@class NSString, NSNumber;

@interface BizImagePreviewActionSrcCommentInfo : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSNumber *replyId;

+ (id)makeWithType:(id)a0 contentId:(id)a1 replyId:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
