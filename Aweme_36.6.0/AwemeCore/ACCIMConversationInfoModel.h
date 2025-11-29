@class NSString, NSNumber, NSDictionary;

@interface ACCIMConversationInfoModel : NSObject

@property (readonly, copy, nonatomic) NSString *convId;
@property (readonly, copy, nonatomic) NSString *convName;
@property (readonly, nonatomic) NSNumber *groupCreateType;
@property (readonly, nonatomic) BOOL isNewCreatedConversation;
@property (copy, nonatomic) NSDictionary *trackParams;

- (id)initWithConvId:(id)a0 convName:(id)a1 groupCreateType:(id)a2 isNewCreatedConversation:(BOOL)a3;
- (void).cxx_destruct;

@end
