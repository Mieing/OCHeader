@class NSString;

@interface BDPOrderCommentModel : NSObject

@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *orderTitle;
@property (nonatomic) BOOL canComment;
@property (nonatomic) long long canCommentTime;
@property (copy, nonatomic) NSString *guideTitle;

- (id)initWithOrderId:(id)a0 orderTitle:(id)a1 canComment:(BOOL)a2 canCommentTime:(long long)a3 orderSystem:(unsigned long long)a4;
- (void).cxx_destruct;

@end
