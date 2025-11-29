@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWECommentListRequestModel : NSObject

@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSArray *insertIDs;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
