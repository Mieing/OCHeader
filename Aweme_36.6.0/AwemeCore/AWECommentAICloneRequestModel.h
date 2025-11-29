@class NSString;

@interface AWECommentAICloneRequestModel : NSObject

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *channelID;
@property (nonatomic) BOOL expectState;

- (id)requestParamsDict;
- (void).cxx_destruct;

@end
