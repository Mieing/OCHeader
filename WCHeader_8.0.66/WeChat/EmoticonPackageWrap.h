@class NSString;

@interface EmoticonPackageWrap : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *panelUrl;
@property (nonatomic) unsigned int payStatus;
@property (nonatomic) unsigned int downloadStatus;
@property (nonatomic) unsigned int installTime;
@property (nonatomic) unsigned int removeTime;
@property (nonatomic) unsigned int itemCount;
@property (nonatomic) unsigned int designerUin;

+ (void)initialize;

@end
