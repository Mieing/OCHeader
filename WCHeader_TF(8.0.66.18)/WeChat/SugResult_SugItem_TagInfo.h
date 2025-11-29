@class NSData;

@interface SugResult_SugItem_TagInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *title;
@property (retain, nonatomic) NSData *iconUrl;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int tagType;

+ (void)initialize;

@end
