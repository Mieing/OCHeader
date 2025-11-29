@class NSString;

@interface MMOpenVoiceMember : NSObject

@property (retain, nonatomic) NSString *openId;
@property (nonatomic) int memberId;
@property (nonatomic) unsigned int status;

- (void).cxx_destruct;

@end
