@class NSString, NSNumber, NSDictionary;

@interface AWECommentDeleteRequestModel : NSObject

@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSNumber *serviceID;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)initWithCommentID:(id)a0;
- (void).cxx_destruct;

@end
