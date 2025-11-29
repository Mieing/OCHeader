@class NSData, NSString;

@interface FinderLivePromoteInfoAvailableItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int isAvailable;
@property (retain, nonatomic) NSData *infoBuffer;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned int isAddable;
@property (retain, nonatomic) NSData *extBuffer;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *statusTips;

+ (void)initialize;

@end
