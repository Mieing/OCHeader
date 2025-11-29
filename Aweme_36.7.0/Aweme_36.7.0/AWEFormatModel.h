@class NSNumber, NSDictionary, NSString;

@interface AWEFormatModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *ownerUserID;
@property (retain, nonatomic) NSNumber *formatID;
@property (nonatomic) BOOL isShow;
@property (retain, nonatomic) NSNumber *digitalID;
@property (nonatomic) unsigned long long formatStatus;
@property (retain, nonatomic) NSDictionary *pngDict;
@property (retain, nonatomic) NSNumber *formatImBotId;
@property (nonatomic) long long teamType;
@property (nonatomic) long long routeType;
@property (retain, nonatomic) NSDictionary *interactiveEnterParams;
@property (nonatomic) BOOL isAssistant;
@property (retain, nonatomic) NSNumber *formatIsOpen;
@property (nonatomic) BOOL showMyProfileCircle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
