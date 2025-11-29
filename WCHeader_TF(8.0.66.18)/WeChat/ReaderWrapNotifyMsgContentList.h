@class NSString;

@interface ReaderWrapNotifyMsgContentList : NSObject <NSCopying>

@property (retain, nonatomic) NSString *content;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *colorLight;
@property (retain, nonatomic) NSString *colorDark;
@property (nonatomic) BOOL fontBold;
@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) NSString *nightPicUrl;
@property (nonatomic) unsigned int iconStyle;
@property (nonatomic) long long mergeCount;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
