@class NSString, MMListenCategoryItem, NSData, MMListenItem, AudioPushShowInfo;

@interface AudioPushContent : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *configType;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSData *recommendBuffer;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (nonatomic) unsigned int contentType;
@property (retain, nonatomic) AudioPushShowInfo *showInfo;

+ (void)initialize;

@end
