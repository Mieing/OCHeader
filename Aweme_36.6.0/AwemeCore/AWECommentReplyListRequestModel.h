@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWECommentReplyListRequestModel : NSObject

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *commentID;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSArray *insertIDs;
@property (copy, nonatomic) NSArray *topIDs;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
