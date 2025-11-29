@class NSString, NSMutableArray, MpEcsJumpInfo;

@interface BizServiceMenuButton : WXPBGeneratedMessage

@property (nonatomic) unsigned int id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSMutableArray *subButtonList;
@property (nonatomic) unsigned int acttype;
@property (retain, nonatomic) NSString *nativeUrl;
@property (nonatomic) unsigned int showIconType;
@property (retain, nonatomic) MpEcsJumpInfo *menuEcsData;

+ (void)initialize;

@end
