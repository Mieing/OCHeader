@class UIImage, NSString, NSArray;
@protocol IESIMConversationProtocol;

@interface AWEIMMuteSettingsModel : NSObject

@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *heads;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSArray *firstSection;
@property (copy, nonatomic) NSArray *secondSection;

- (long long)__currentMuteType;
- (id)getItemWithMask:(long long)a0;
- (id)currentMuteString;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
