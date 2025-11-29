@class NSString, NSArray;

@interface IESECCommentParams : NSObject

@property (nonatomic) BOOL isImpressionTag;
@property (copy, nonatomic) NSString *generalID;
@property (copy, nonatomic) NSArray *topCommentIds;
@property (copy, nonatomic) NSString *pageTitle;

- (void).cxx_destruct;

@end
