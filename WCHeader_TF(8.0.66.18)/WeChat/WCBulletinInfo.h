@class NSString;

@interface WCBulletinInfo : NSObject

@property (nonatomic) BOOL enableDescExtend;
@property (nonatomic) BOOL isFromThemeGuide;
@property (retain, nonatomic) NSString *descriptionStr;
@property (retain, nonatomic) NSString *descriptionExtend;
@property (nonatomic) BOOL isEdit;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSString *reportDescriptionStr;
@property (retain, nonatomic) NSString *reportDescriptionExtend;
@property (retain, nonatomic) NSString *aiAssistantInfoId;

- (void).cxx_destruct;

@end
