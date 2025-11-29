@class NSString, NSObject;

@interface EmoticonTabItem : NSObject

@property (retain, nonatomic) NSString *accessibilityName;
@property (retain, nonatomic) NSString *packageId;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *panelUrl;
@property (nonatomic) unsigned int downloadStatus;
@property (nonatomic) int type;
@property (retain, nonatomic) NSObject *m_userInfo;

- (id)init;
- (void).cxx_destruct;

@end
