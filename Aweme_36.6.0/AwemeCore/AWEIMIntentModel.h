@class NSString, UIImage;

@interface AWEIMIntentModel : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSString *conversationID;

+ (id)createSendMessageIntentWithGroupName:(id)a0 cid:(id)a1;
+ (void)donateWithModels:(id)a0;

- (BOOL)isValide;
- (void).cxx_destruct;
- (void)donate:(id /* block */)a0;

@end
