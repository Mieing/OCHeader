@class NSNumber, NSString, NSDictionary;

@interface BDUGPushPayload : NSObject

@property (copy, nonatomic) NSNumber *badge;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *extraStr;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *soundFileName;
@property (copy, nonatomic) NSString *soundUrl;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *interruptionLevel;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *attachmentUrl;

- (void).cxx_destruct;

@end
