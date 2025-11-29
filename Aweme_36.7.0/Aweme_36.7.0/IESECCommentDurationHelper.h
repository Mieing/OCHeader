@class NSString;

@interface IESECCommentDurationHelper : NSObject

@property (nonatomic) double interactionStartTime;
@property (nonatomic) double interactionReqStartTime;
@property (nonatomic) double interactionReqEndTime;
@property (copy, nonatomic) NSString *interactionType;
@property (copy, nonatomic) NSString *interactionContent;

- (void).cxx_destruct;
- (void)clear;

@end
