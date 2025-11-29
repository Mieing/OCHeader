@class NSString, NSNumber, NSDictionary;

@interface AWEIMConversationInfoModel : NSObject

@property (readonly, copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSString *convName;
@property (nonatomic) BOOL isNewCreatedConversation;
@property (retain, nonatomic) NSNumber *groupCreateType;
@property (copy, nonatomic) NSDictionary *trackParams;

- (id)initWithConvId:(id)a0 convName:(id)a1 groupCreateType:(id)a2;
- (void).cxx_destruct;

@end
