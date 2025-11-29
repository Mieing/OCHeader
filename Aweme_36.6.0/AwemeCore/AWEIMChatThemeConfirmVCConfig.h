@class NSArray, AWEIMChatThemeModel;

@interface AWEIMChatThemeConfirmVCConfig : NSObject

@property (nonatomic) long long style;
@property (retain, nonatomic) AWEIMChatThemeModel *model;
@property (nonatomic) BOOL isGroup;
@property (copy, nonatomic) NSArray *peerURLList;

- (void).cxx_destruct;

@end
