@class NSArray, NSString;

@interface IESECRelationFeedCommentViewModel : NSObject

@property (retain, nonatomic) NSArray *comments;
@property (nonatomic) long long rollingCommentIndex;
@property (copy, nonatomic) NSString *desc;

- (void).cxx_destruct;

@end
