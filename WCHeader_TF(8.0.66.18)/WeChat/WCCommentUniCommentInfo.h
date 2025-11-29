@class NSString, NSData;

@interface WCCommentUniCommentInfo : NSObject

@property (copy, nonatomic) NSString *entityId;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) NSData *bypassBuffer;
@property (nonatomic) int bypassBufferType;
@property (copy, nonatomic) NSString *feedOwnerUsername;

- (void).cxx_destruct;

@end
