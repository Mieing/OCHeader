@class NSString, NSDictionary;

@interface LSIMEvaluationInfo : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isEvaluateRobot;
@property (readonly, copy, nonatomic) NSString *commentType;
@property (readonly, copy, nonatomic) NSString *pigeonCid;
@property (readonly, copy, nonatomic) NSString *talkID;
@property (readonly, copy, nonatomic) NSDictionary *csTags;
@property (readonly, copy, nonatomic) NSDictionary *robotTags;
@property (readonly, copy, nonatomic) NSDictionary *useTags;
@property (readonly, copy, nonatomic) NSString *remarkTagString;
@property (copy, nonatomic) NSDictionary *bizExt;

- (id)initWithMessageOriginExt:(id)a0;
- (void).cxx_destruct;

@end
