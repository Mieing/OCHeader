@class NSString, CContact, NSMutableDictionary, WCMomentsClickOptions;

@interface WCMomentsClickContext : NSObject

@property (retain, nonatomic) WCMomentsClickOptions *clickOptions;
@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) int contactScene;
@property (retain, nonatomic) NSMutableDictionary *urlExtraInfo;

+ (id)clickContextFromClickOptions:(id)a0;

- (void).cxx_destruct;

@end
